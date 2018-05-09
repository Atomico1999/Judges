# -*- coding: utf-8 -*-

N = input("\nInsira n: ")

numerador = 1.0
denominador = 1.0
total = 0.0

for i in range(N):
	print "Total: ",total
	print "Numerador: ",numerador
	print "Denominador: ",denominador

	razao = (numerador/denominador)
	print "Razão: ", (razao), "\n"
	total += razao
	numerador = numerador + 2
	denominador = denominador + 1

print "Total: ", total