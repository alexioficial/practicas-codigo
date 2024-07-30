class ABC:
    def __init__(self, a):
        self.a = a
    
    class __call__():
        print('HGola')
        class __call__():
            print('asdfasdfasfd')
            def __call__(self):
                print('Hola')

ABC('a')()()()