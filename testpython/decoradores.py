def mi_decorador(func: callable):
    def wrapper():
        print('hola')
        func()
        print('adios')
    return wrapper

@mi_decorador
def hola():
    print('asdfasdfasdfasdf')

hola()