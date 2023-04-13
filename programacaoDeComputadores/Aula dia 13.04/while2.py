var = int(input("Digite um número: "))
count = 0

while var != 0:
    if var == 2:
        count += 1
    var = int(input("Digite um número: "))

    
print ('O número 2 foi digitado', count, 'vezes')