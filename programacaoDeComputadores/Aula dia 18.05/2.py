hmax = 0
hmin = 10

for i in range(0,15):
    altura = float(input("Digite a altura: "))
    if altura > hmax:
        hmax = altura
    elif altura < hmax:
        hmax = hmax
    else:
        altura = altura

    if altura < hmin:
        hmin = altura
    elif altura < hmax:
        hmin = hmin
    else:
        altura = altura
    
print("A maior altura é:", hmax, "A menor altura é:", hmin)