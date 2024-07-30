use std::env;

fn operacion(num1: i64, num2: i64, signo: &str) -> Result<i64, String> {
    Ok(match signo {
        "+" => num1 + num2,
        "-" => num1 - num2,
        "x" => num1 * num2,
        "*" => num1 * num2,
        "/" => num1 / num2,
        _ => return Err(String::from("Operador no válido")),
    })
}

fn main() {
    let (num1, num2, signo) = (
        env::args().nth(1).unwrap().parse::<i64>(),
        env::args().nth(3).unwrap().parse::<i64>(),
        &env::args().nth(2).unwrap(),
    );

    match (num1, num2) {
        (Ok(num1), Ok(num2)) => match operacion(num1, num2, signo) {
            Ok(resultado) => println!("El resultado es: {}", resultado),
            Err(error) => println!("Error al realizar la operación: {}", error),
        },
        _ => println!("Error al convertir los números a enteros"),
    }
}
