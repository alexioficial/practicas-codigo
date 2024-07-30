class MiTest:
    def __init__(self, a, b):
        self.a = a
        self.b = b
        self.data: dict = {}
    
    def __call__(self, nums: list[int]):
        for i in nums:
            self.a += i
        return self.a
    
    def __str__(self) -> str:
        return str(self.a)

    def __getitem__(self, index):
        return self.data[index]
    
    def __setitem__(self, index, value):
        self.data[index] = value

a = MiTest(1, 2)
# print(a([1, 2]))
# print(str(a))

# a.data = {'nombre': 'Alexi', 'apellidos': 'Grullon Matias', 'edad': 14}
# a['nombre'] = 'Jose'
# print(a.data)
# print(a['edad'])

print(list(a))