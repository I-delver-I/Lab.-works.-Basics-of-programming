n = input("Enter a number which is equal to 4 or is bigger than the last one: ")    # Initialization of n
while int(n) < 4:   # Checking of n for performing of the condition
    n = input("Something went wrong. Enter the number again: ")
v1 = 0  # Initialization of three primary elements of the sequence
v2 = 0
vn = 0
v3 = 1.5
i = 4

while i <= int(n):  # Calculating of vn
    vn = ((i + 1) / (i ** 2 + 1)) * v3 - v2 * v1
    v1 = v2
    v2 = v3
    v3 = vn
    i += 1
if vn != 0:  # Checking for belonging to the range of data type
    print("vn is equal to", vn)
else:
    print("Too big value")

