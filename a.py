"""
ÚS:
    Aquest programa busca d'entre totes les entregues del jutge els problemes donats, agafa l'última submission,
    la reanomena amb el format <codi_problema> <nom_problema>.cc i el col·loca a la carpeta de destinació del seu grup de problemes.

PASSOS:
    1. Introdueix a adreca_origen el path a la carpeta on tens totes les submissions del jutge.
    2. Introdueix a adreca_destinacio_base el path a la carpeta destí on vols que vagin les submissions filtrades.
    3. Executa el programa i introdueix com a entrada un copia-enganxa dels exercicis del jutge:

    Per exemple:
        Nom Carpeta 1
            P12345   Problema 1
            X12345   Problema 2
        Nom Carpeta 2
            P54321  Problema 3
            X54321  Problema 4
"""
import re
import os
import shutil

adreca_origen = r"C:\Users\RogeRegoR\Downloads\roger.bitlloch@estudiantat.upc.edu"
adreca_destinacio_base = r"C:\Users\RogeRegoR\Downloads\PRO1"

def extreure_codi_i_nom(linia):
    # Elimina espais inicials i finals, i extreu codi i nom si acaba amb "C++"
    linia = linia.strip()
    parts = linia.split()
    if len(parts) > 1 and re.match(r"^[PX]\d{5}$", parts[0]):  # Comprova que comença amb P o X i 5 nombres
        codi = parts[0]
        nom = " ".join(parts[1:]).replace("C++", "").strip()  # Nom sense "C++"
        return codi, nom
    return None, None

def netejar_nom_fitxer(nom):
    # Substitueix els caràcters prohibits per un guió baix "_"
    return re.sub(r'[<>:"/\\|?*]', '', nom)

def processar_string(entrada_string):
    # Processa la string i organitza els problemes dins de categories
    categories = {}
    linies = entrada_string.splitlines()
    categoria_actual = None

    for linia in linies:
        linia = linia.strip()
        if not linia:
            continue

        # Detecta una nova categoria si la línia no és un codi vàlid
        if not re.match(r"^[PX]\d{5}$", linia.split()[0]):
            categoria_actual = linia
            categories[categoria_actual] = []
        else:
            codi, nom = extreure_codi_i_nom(linia)
            if codi and nom:
                if categoria_actual is None:
                    print(f"Error: S'ha trobat un problema sense categoria associada: {linia}")
                    continue
                categories[categoria_actual].append((codi, nom))

    return categories

def trobar_carpeta_codi(adreca_origen, codi):
    # Comprova si existeix la carpeta amb diversos sufixos
    sufixos = ["_ca", "_es", "_en", "_de", "_fr"]
    for sufix in sufixos:
        carpeta = os.path.join(adreca_origen, codi + sufix)
        if os.path.isdir(carpeta):
            return carpeta
    return None

def copiar_fitxer_mes_gran(adreca_origen, carpeta_destinacio, codi, nom):
    # Busca el fitxer amb codi SXXX-AC.cc més gran i el copia reanomenat
    carpeta_origen = trobar_carpeta_codi(adreca_origen, codi)
    if not carpeta_origen:
        print(f"No s'ha trobat cap carpeta amb el codi {codi} a {adreca_origen}")
        return

    fitxer_més_gran = None
    número_més_gran = -1

    for arxiu in os.listdir(carpeta_origen):
        if arxiu.startswith("S") and arxiu.endswith("-AC.cc"):
            try:
                número = int(arxiu[1:4])  # Extreu el número després de la S
                if número > número_més_gran:
                    número_més_gran = número
                    fitxer_més_gran = arxiu
            except ValueError:
                continue

    if fitxer_més_gran:
        ruta_original = os.path.join(carpeta_origen, fitxer_més_gran)
        nom_netejat = netejar_nom_fitxer(f"{codi} {nom}.cc")  # Neteja el nom del fitxer
        ruta_nova = os.path.join(carpeta_destinacio, nom_netejat)
        shutil.copy2(ruta_original, ruta_nova)
        print(f"Fitxer {fitxer_més_gran} copiat com {nom_netejat} a {carpeta_destinacio}")
    else:
        print(f"No s'ha trobat cap fitxer SXXX-AC.cc a {carpeta_origen}")

def crear_carpetes_i_copiar(categories, adreca_origen, adreca_destinacio_base):
    for categoria, problemes in categories.items():
        carpeta_categoria = os.path.join(adreca_destinacio_base, netejar_nom_fitxer(categoria))
        os.makedirs(carpeta_categoria, exist_ok=True)
        print(f"Carpeta de categoria creada: {carpeta_categoria}")

        for codi, nom in problemes:
            copiar_fitxer_mes_gran(adreca_origen, carpeta_categoria, codi, nom)

def copiar_fitxers_organitzats(adreca_origen, adreca_destinacio_base):
    print("Introdueix les línies de l'entrada (acaba amb una línia buida):")
    entrada_string = ""
    while True:
        linia = input()  # Llegeix línies una a una
        if not linia.strip():  # Si la línia és buida, atura la lectura
            break
        entrada_string += linia + "\n"  # Afegeix la línia amb un salt de línia

    categories = processar_string(entrada_string)
    crear_carpetes_i_copiar(categories, adreca_origen, adreca_destinacio_base)

if __name__ == "__main__":
    copiar_fitxers_organitzats(adreca_origen, adreca_destinacio_base)
