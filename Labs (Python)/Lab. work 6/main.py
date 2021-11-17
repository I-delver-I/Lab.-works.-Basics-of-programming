def _input(variables = []):  # Input of x and precision
    y = float(input("Please, enter a number: "))
    while y < 0:  # Checking for forbidden values
        y = float(input("Enter x which isn't less than zero: "))
    variables.append(y)
    precision = float(input("Please, enter the precision: "))
    variables.append(precision)
    return variables


def arcTg(X, PRECISION):  # Calculation of arctg
    numerator = float(X)
    arctg = numerator
    xn = numerator
    i = 1
    while float(PRECISION) < xn:
        numerator *= -(X ** 2)
        xn = numerator / (2 * i + 1)
        arctg += xn
        i += 1
    return arctg


def output(u):  # The output of y
    print("The y is equal to", u)


lis = _input()
y = lis[0]
precision = lis[1]
# Calculation of y
if y > 1:  # The 1-st condition
    y = float(arcTg(y, precision) / arcTg(y - 5, precision))
elif 1 >= y >= 0:  # The second condition
    y = float(arcTg(y, precision) + arcTg(2 * y, precision))
print(y)  # The output of y
