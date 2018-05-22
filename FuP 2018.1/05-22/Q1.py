# -*- coding: utf-8 -*-

vetor = 10*[0]

for i in range(10):
	vetor[i] = 0

num = 0
somatorio = 0
produtorio = 1

for i in range(10):
	vetor[i] = input("Insira um número: ")

for i in range(10):
	somatorio += vetor[i]
print("Somatorio: ", + somatorio)

for i in range(10):
	produtorio *=  vetor[i]
print("Produtorio: ", + produtorio)
