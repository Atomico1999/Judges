# -*- coding: utf-8 -*-

aux = 0
f1 = 0
f2 = 1

n = 0
print "\nPara SAIR insira um numero negativo.\n"

while(n >= 0):
	n = input("\nInsira n: ")

	for i in range(n):
#		print "aux: ",aux
#		print "f1: ",f1
#		print "f2: ",f2
		print "Fibonacci",i+1,"-",f1
		
		aux = f1 + f2
		f1 = f2
		f2 = aux
	print "\n"

print "fim\n"