# -*- coding: utf-8 -*-

n = input("\nInsira o numero a ser testado: ")
n = float(n)
aux = 0

if n >= 0:
	while aux*aux < n:
		aux += 1
	if aux*aux == n:
		print aux, " eh a raiz de ", n, ", logo ", n, " eh quadrado perfeito.\n"
	else:
		print n, " nao eh quadrado perfeito.\n"
else:
	print "Reinicie o programa e insira um numero nao nulo\n"