# -*- coding: utf-8 -*-

n = input("\nInsira N: ")
maior = 0
menor = 0
media = 0

for i in range(n):
	aux = float(input("numero: "))
	if aux > maior:
		maior = aux
	elif aux < menor:
		menor = aux

media = (maior+menor)/2.0
print "Maior: ", maior
print "Menor: ", menor
print "Media: ", media