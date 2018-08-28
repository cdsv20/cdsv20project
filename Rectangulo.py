class Rectangulo():
    def __init__(self,l,a):   #Constructor
        self.largo = l
        self.ancho = a

    def area(self):
        return self.largo*self.ancho

    def perimetro(self):
        return 2*(self.ancho+self.largo)

class Cuadrado(Rectangulo):
    def __init__(self,lado):
        Rectangulo.__init__(self,lado,lado)
    


