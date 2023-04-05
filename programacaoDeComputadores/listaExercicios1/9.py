pagamento = int(input('A forma de pagamento será: 1 - à vista em dinheiro ou cheque, 2- à vista no cartão de crédito ou 3 - em duas vezes sem juros: '))
valor = float(input('Digite o valor da compra '))

if pagamento == 1:
    valor = valor - (valor * 0.1)
    print('O valor total para pagamento é', valor)
elif pagamento == 2:
    valor = valor - (valor * 0.15)
    print('O valor total para pagamento é', valor)
elif pagamento == 3:
    valor = valor
    print('O valor total para pagamento em duas vezes é', valor)