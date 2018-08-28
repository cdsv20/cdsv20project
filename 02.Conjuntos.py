print "Conjuntos"

A = {1,3,5,7}
B = {2,4,6,8}
C = {2,3,6,7}

Union = A | B
Interseccion = C & B
Diferencia = A - C
OrExclusiva = A ^ C
OrExclusiv2 = (A - C) | (C - A)

print "Conjunto A =", A,"Conjunto B =", B,"Conjunto C =", C
print "Union = ", Union
print "Interseccion = ", Interseccion
print "Diferencia = ", Diferencia
print "Or Exclusiva = ", OrExclusiva
print "Or Exclusiv 2= ", OrExclusiv2
