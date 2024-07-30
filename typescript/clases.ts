class Animal {
    nombre: string;

    constructor(nombre: string) {
        this.nombre = nombre;
    }

    hacerSonido(): void {
        console.log("Haciendo sonido genérico");
    }
}

class Perro extends Animal {
    hacerSonido(): void {
        console.log("Woof, woof");
    }
}

const miPerro = new Perro("Buddy");
miPerro.hacerSonido();
