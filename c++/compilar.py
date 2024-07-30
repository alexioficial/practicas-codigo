from os import chdir, system
from sys import argv

nombre = argv[1].replace('.cpp', '')

chdir('./output')
compilation_status = system(f'g++ ../{nombre}.cpp -o {nombre}.exe')

if compilation_status == 0:
    system(f'.\{nombre}.exe')
else:
    print("Error en la compilación. Por favor, revise su código y el compilador.")