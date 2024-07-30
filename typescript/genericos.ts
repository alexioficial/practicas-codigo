function zip<T extends any[]>(...arrays: T): T[] {
    const minLength: number = Math.min(...arrays.map(arr => arr.length));
    let zipped: T = [] as any;

    for (let i = 0; i < minLength; i++) {
        zipped.push(arrays.map(arr => arr[i]) as any);
    }

    return zipped;
}

function enumerate(array: any[]): Array<[number, any[]]> {
    let result: any[] = []
    for (let i = 0; i < array.length; i++) {
        result.push([i, array[i]])
    }
    return result
}

function range(start = 0, end: number, skip = 1): number[] {
    skip = skip < 1 ? 1 : skip
    let result: number[] = []
    for (let i = start; i <= end; i += skip) {
        result.push(i);
        console.log(i)
    }
    return result
}

const uno_diez = range(1, 10)
console.log(uno_diez)
const numeros_3 = range(0, 90, 3)
console.log(numeros_3)

const ages = [14, 15, 17]
const names = ['Alexi', 'Juan', 'Lee']
const ids = enumerate(zip(names, ages))

ids.forEach(([id, [name, age]]) => {
    console.log(id, name, age)
})