fn main() {
    // Tipos primitivos:
    // Booleanos
    let mut x: bool = true;
    x = false;
    
    // Char: almacena un solo caracter
    let mut y: char = 'a';
    y = 'O';
    println!("x es {} y y es {}", x, y);

    // Tipos numericos:
    // Los que tienen i son integer y el numero que les sigue son los bits
    // i8
    // i16
    // i32
    // i64
    // Los que son u son sin signo y el numero que les sigue son los bits
    // u8
    // u16
    // u32
    // u64
    // No se
    // isize
    // usize
    // Los que son f son float o decimales
    // f32
    // f64
    let num1: i64 = 910431;
    let num2: f32 = 35.2;
    println!("{} {}", num1, num2);
}