fn main() {
    imprimir_numero(56); // x es 56
    imprimir_suma(2, 3); // la suma es: 5
    let mut x: i32 = suma_uno(4);
    imprimir_numero(x); // x es 5
    x = foo(5);
    println!("{}", x); // 5
    let f = suma_uno; // f es un apuntador a funcion, y se puede usar como una
    println!("{}", f(3)); // 4
}

fn imprimir_numero(x: i32) {
    println!("x es {}", x);
}

fn imprimir_suma(x: i32, y: i32) {
    println!("la suma es: {}", x + y);
}

fn suma_uno(x: i32) -> i32 {
    x + 1
}

// Retornos tempranos:
fn foo(x: i32) -> i32 {
    return x;
    x + 1 // Nunca se lanzara este codigo
}