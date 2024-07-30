import curses

# Definición de las opciones
opciones = [
    "Abrir archivo",
    "Guardar archivo",
    "Cerrar archivo",
    "Salir"
]

def main(stdscr):
    # Configuración básica de la pantalla
    curses.curs_set(0)  # Oculta el cursor
    stdscr.nodelay(1)   # Configura la entrada sin bloqueo

    # Configuración del header
    stdscr.addstr(0, 0, "My Text Editor", curses.A_REVERSE)
    stdscr.addstr(1, 0, "-" * 15)

    # Mostrar las opciones
    for i, opcion in enumerate(opciones):
        stdscr.addstr(3 + i, 0, f"{i + 1}. {opcion}")

    stdscr.addstr(3 + len(opciones), 0, "Seleccione una opción:")

    while True:
        # Captura el próximo caracter de la entrada
        c = stdscr.getch()

        # Verifica si se presionó 'q' para salir del bucle
        if c == ord('q'):
            break

        # Procesar la entrada del usuario
        if c >= ord('1') and c <= ord('0') + len(opciones):
            # Resta '0' para obtener el índice de la opción
            opcion_index = c - ord('0') - 1
            stdscr.addstr(20, 0, f"Opción seleccionada: {opciones[opcion_index]}")
        stdscr.refresh()

if __name__ == "__main__":
    curses.wrapper(main)
