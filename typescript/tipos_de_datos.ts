type Persona = {
    nombre: String,
    edad: Number,
}

let yo: Persona = {
    nombre: 'Alexi',
    edad: 3
}

console.log(yo.nombre)

type Prueba<T, T2> = {
    p1: T,
    p2: T,
    pp1: T2,
    pp2: T2
}

let holamundo: Prueba<Number, String> = {
    p1: 54,
    p2: 45,
    pp1: 'hola',
    pp2: 'mundo'
}