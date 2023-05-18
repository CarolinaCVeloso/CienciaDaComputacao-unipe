num = int(input("Digite um número: "))
npares = 0
nimpares = 0
somapares = 0
somaimpares = 0
mediapares = 0
medianumeros = 0

while num != 0:
    if (num % 2) == 0:
        npares += 1
        somapares += num

    else:
        nimpares = nimpares + 1
        somaimpares += num

    num = int(input("Digite um número: "))

    mediapares = somapares / npares

    medianumeros = (somapares + somaimpares) / (npares + nimpares)

print("Numeros pares: ", npares)
print("Numeros impares: ", nimpares)
print("Media pares:", mediapares)
print("Media geral", medianumeros)