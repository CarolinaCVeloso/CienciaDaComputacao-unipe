print('As notas e média vão de 0 - 100')
nota1 = float(input('Digite a primeira nota: '))
nota2 = float(input('Digite a segunda nota: '))
nota3 = float(input('Digite a terceira nota: '))
me = float(input('Digite a média dos exercícios: '))
ma = (nota1 + (nota2*2) + (nota3*3) + me)/7

print(ma)

if ma >=90:
    print('As notas foram', nota1, nota2, nota3, 'e a média dos exercícios foi', me, ', logo, a média de Aproveitamento é', ma, ', com conceito A')
    print('Aprovado')
elif ma >= 75 and ma <90:
    print('As notas foram', nota1, nota2, nota3, 'e a média dos exercícios foi', me, ', logo, a média de Aproveitamento é', ma, ', com conceito B')
    print('Aprovado')
elif ma >= 60 and ma < 75:
    print('As notas foram', nota1, nota2, nota3, 'e a média dos exercícios foi', me, ', logo, a média de Aproveitamento é', ma, ', com conceito C')
    print('Aprovado')
elif ma >= 40 and ma < 60:
    print('As notas foram', nota1, nota2, nota3, 'e a média dos exercícios foi', me, ', logo, a média de Aproveitamento é', ma, ', com conceito D')
    print('Reprovado')
elif ma < 40:
    print('As notas foram', nota1, nota2, nota3, 'e a média dos exercícios foi', me, ', logo, a média de Aproveitamento é', ma, ', com conceito E')
    print('Reprovado')