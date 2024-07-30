class Tupla:
    def __init__(self, **elems):
        self.elems = dict(elems)

    def __getattr__(self, attr):
        if attr in self.elems:
            return self.elems[attr]
        raise AttributeError(f"'Tupla' object has no attribute '{attr}'")

    def __dir__(self):
        return list(self.elems.keys())

mitupla = Tupla(x = 10, y = 20)

print(mitupla.y)
