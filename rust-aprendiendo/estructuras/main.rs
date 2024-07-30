struct Punto {
    x: i32,
    y: i32
}

// Cuando se hace una implementacion a una estructura es para hacer funciones
// que interactuen con los valores de la estructura, en este caso de la estructura
// Punto que tiene x y y.
impl Punto {
    fn new(x: i32, y: i32) -> Punto {
        Punto { x, y }
    }

    fn moverx(&mut self, x: i32) -> i32 {
        self.x = x;
        self.x
    }

    fn movery(&mut self, y: i32) -> i32 {
        self.y = y;
        self.y
    }

    fn mostrardatos(&self) {
        println!("x es {}, y es {}", self.x, self.y);
    }
}

fn main() {
    basic(false);
    complex(true);
}

fn basic(ejecutar: bool) {
    if ejecutar {
        let mut origen: Punto = Punto { x: 0, y: 0 };
        origen.x = 5;
        origen.y = 10;
    }
}

fn complex(ejecutar: bool) {
    if ejecutar {
        // Para acceder a algun metodo o funcion de las implementaciones
        // se ponen 2 puntos, seguido del nombre de la funcion
        let mut origen: Punto = Punto::new(0, 0);
        origen.moverx(10);
        origen.movery(5);
        origen.mostrardatos();
    }
}