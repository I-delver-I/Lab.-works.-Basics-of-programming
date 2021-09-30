# Задача: з’ясувати, скільки розв’язків (один, безліч, не має) має система рівнянь,
# задана коефіцієнтами a1, b1, a2, b2 і правими частинами c1, c2

from decimal import Decimal

# Initialization of coefficients and parts

a1 = float(input("Enter a1: "))
a2 = float(input("Enter a2: "))
b1 = float(input("Enter b1: "))
b2 = float(input("Enter b2: "))
c1 = float(input("Enter c1: "))
c2 = float(input("Enter c2: "))

if a1 * b2 == a2 * b1:
	if a1 * c2 == a2 * c1:
		if b1 * c2 == b2 * c1:
			quantity = Decimal('Infinity')
	else:
		quantity = 0
else:
	quantity = 1

print("The quantity of solutions is ", quantity)