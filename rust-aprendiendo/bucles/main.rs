fn main() {
    bucleloop(false);
    buclewhile(false);
    buclefor(true, 2);
}

fn bucleloop(ejecutar: bool) {
    if ejecutar {
        let mut x: i8 = 1;
        loop {
            if x > 10 {
                break;
            } else {
                println!("Loop: x es {}", x);
            }
            x += 1;
        }
    }
}

fn buclewhile(ejecutar: bool) {
    if ejecutar {
        let mut x: i8 = 1;
        let mut completado: bool = false;
        while !completado {
            if x > 10 {
                completado = true;
            } else {
                println!("While: x es {}", x);
            }
            x += 1;
        }
    }
}

fn buclefor(ejecutar: bool, caso: i8) {
    if ejecutar {
        if caso == 1 {
            for x in 0..10 { // Cuando se sigue la secuencia (x..y) funciona como "range()" en python
                println!("For: x es {}", x);
            }
        } else if caso == 2 {
            let milista: [&str; 3] = ["Alexi", "Cristofer", "Juan"];
            for x in milista { // Si se itera sobre algo, se usa como en python
                println!("For: x es {}", x);
            }
        } else {
            println!("Caso incorrecto");
        }
    }
}