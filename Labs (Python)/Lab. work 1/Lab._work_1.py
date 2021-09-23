# Завдання: дані гіпотенуза і катет прямого трикутника. Знайти другий катет цього трикутника

Cathetus1 = float(input("Please, enter a length of the first cathetus: "))  # введення довжини першого катета

if Cathetus1 <= 0:
    print("A side of an triangle mustn't be less or equal to 0")

Hypotenuse = float(input("Please, enter a length of hypotenuse: "))  # введення довжини гіпотенузи

if Hypotenuse <= 0:
    print("A side of an triangle mustn't be less or equal to 0")

Cathetus2 = float(Hypotenuse ** 2 - Cathetus1 ** 2) ** 0.5  # розрахунок другого катета за теоремою Піфагора
print("The second cathetus is equal to: " + str(Cathetus2))  # виведення результату довжини другого катету


