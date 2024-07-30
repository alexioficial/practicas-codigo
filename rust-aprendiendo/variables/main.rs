fn main() {
    let x: i32 = 5;
    // x = 40 // si se ejecuta este codigo dara un error debido
              // a que x no es una variable mutable, para volverla
              // mutable hay que poner let mut x: i32 = 5;
    let mut y = 4;
    y += x;
    println!("El valor de x es {}", x);
    println!("El valor de y es {}", y);
}