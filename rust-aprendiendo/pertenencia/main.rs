fn main() {
    semanticamovimiento();
    tiposcopy();
    masquepertenencia(vec![53, 2, 1]);
    let v1 = vec![1, 2, 3];
    let v2 = vec![1, 2, 3];
    let (_v1, _v2, _respuesta) = foo(v1, v2);
}

fn semanticamovimiento() {
    let v: Vec<i8> = vec![1, 2, 3];
    let v2: Vec<i8> = v; // Ahora v no es dueño de su valor porque ha sido movido a v2
    // println!("v[0] es: {}", v[0]); <- este codigo causaria un error, porque el valor de v se movio
    drop(v2);

    /* 
    Algo similar pasa con las funciones que se le pasa una variable de parametro,
    la variable deja de ser dueña de su valor y si se vuelve a usar dara un error
    de que el valor de la variable fue movido
     */
}

fn tiposcopy() {
    /*
    Un trait copy es cuando se pasa el valor de una variable a otra sin que la variable
    original pierda su valor, como los tipos i32 y bool
     */
    let a: i32 = 5;
    let _y: i32 = doblar(a);
    drop(a);

    let b: bool = false;
    let _x: bool = cambiar_verdad(b);
    drop(b);
}

fn masquepertenencia(v: Vec<i32>) -> Vec<i32> {
    // hacer algo con v
    v // devolviendo pertenencia
}

fn foo(v1: Vec<i32>, v2: Vec<i32>) -> (Vec<i32>, Vec<i32>, i32) {
    // hacer algo con v1 y v2
    (v1, v2, 42) // devolviendo pertenencia, así como el resultado de nuestra función
}

fn doblar(x: i32) -> i32 {
    x * 2
}

fn cambiar_verdad(x: bool) -> bool {
    !x
}