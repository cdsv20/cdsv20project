from Rectangulo import *
from Circulo import *

x = Rectangulo(3,6) #Creacion de un objeto rectangulo
print x.largo
print x.ancho
print x.area()
print x.perimetro()

y = Rectangulo(5,7) #Creacion de un objeto rectangulo
print y.largo
print y.ancho
print y.area()
print y.perimetro()

ar = []

for i in range(10):
    r = Rectangulo(i*10,i*20)
    ar.append(r)

for j in range(len(ar)):
    print ar[j].largo,ar[j].ancho,ar[j].area(),ar[j].perimetro()
    
c = Circulo(60)
print c.radio,c.area(),c.perimetro()

d= Cuadrado(10)
print d.largo,d.area(),d.perimetro()
