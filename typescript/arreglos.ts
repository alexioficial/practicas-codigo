let milista: number[] = [2, 4, 8];
milista[1] += 2

milista.push(100);    // Agregar un elemento al final
milista.pop();        // Eliminar el último elemento
let nuevaLista = milista.map(item => item * 2); // Crear una nueva lista multiplicando cada elemento por 2
console.log(nuevaLista.filter(item => item > 4));

for (let i of milista) {
    console.log(i);
}