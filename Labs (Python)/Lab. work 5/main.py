#  Task 25
#  Given a number called "a". Find the nearest prime number to this one
import math

isResult = 0
a = float(input("Please, enter a number: "))    # Initialization of the number
if a == 0:
    print("There are two prime numbers: -1 and 1")
    isResult = 1
isLPrime = False
isRPrime = False
i = 0
y = 0
count = 0
count2 = 0
lNum = 0
rNum = 0
if (a / round(a)) != 1 and a != 0:    # Checking whether the number as an integer one
    lNum = math.floor(a)
    rNum = math.ceil(a)
elif a == 0:
    print("There are two the nearest prime numbers: ", -1, " and ", 1)
    isResult = 1
else:
    lNum = a - 1
    rNum = a + 1
while isResult == 0:
    while ((lNum >= i and lNum > 0) or (i >= lNum and lNum < 0)) \
            or ((rNum >= y and rNum > 0) or (y >= rNum and rNum < 0)):  # The left number
        if i != 0 and (lNum % i) == 0:
            count += 1
            if (count == 2 and i == lNum) or (count == 1 and abs(lNum) == 1):    # The condition to check whether the
                isLPrime = True                                                  # number as a prime one
        if lNum < 0:
            i -= 1
        elif lNum > 0:
            i += 1
        if y and (rNum % y) == 0:
            count2 += 1
            if (count2 == 2 and y == rNum) or (count2 == 1 and abs(rNum) == 1):    # The condition to check whether
                isRPrime = True                                                    # the number as a prime one
        if rNum < 0:
            y -= 1
        elif rNum > 0:
            y += 1
    if isLPrime == False and isRPrime == False:       # Both numbers aren't prime
        lNum -= 1
        rNum += 1
    elif (isLPrime and isRPrime == False) or (isLPrime == False and isRPrime):  # One of numbers is
        if isLPrime:                                                                                        # prime
            isResult = lNum
            print("The nearest prime number is: ", isResult)
        elif isRPrime:
            isResult = rNum
            print("The nearest prime number is: ", isResult)
    elif isLPrime and isRPrime:  # Both numbers are prime
        if (a / int(a)) != 1 and a != 0:
            if math.fabs(rNum - a) < math.fabs(lNum - a):
                isResult = rNum
                print("The prime number is: ", isResult)
            else:
                isResult = lNum
                print("The prime number is: ", isResult)
        else:
            isResult = lNum
            print("There are two the nearest prime numbers: ", isResult)
            isResult = rNum
            print(" and ", isResult)
    isRPrime = False
    isLPrime = False
    i = 0
    y = 0
    count = 0
    count2 = 0
