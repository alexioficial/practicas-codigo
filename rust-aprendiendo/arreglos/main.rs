fn main() {
    listas();
    slices();
    tuplas();
}

fn listas() {
    // Para describir el tipo de dato de un arreglo
    // primero se pone el corchete de arreglo, dentro
    // de este recibe 2 parametros, el tipo de dato
    // que tendran los datos del arreglo y la cantidad.
    let a: [i32; 3] = [1, 2, 3];
    println!("a tiene {} elementos y su segundo elemento es {}", a.len(), a[1]);
}

fn slices() {
    // Un slice es recortar una lista.
    let b: [i32; 5] = [0, 1, 2, 3, 4];
    println!("{:?}", &b[1..3]); // 1, 2
}

fn tuplas() {
    // Una tupla es una lista con tamaño fijo.
    let c: (i32, &str) = (2, "Hola");
    println!("{}", c.1); // Hola
}