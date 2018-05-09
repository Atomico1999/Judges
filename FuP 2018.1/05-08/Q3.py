# -*- coding: utf-8 -*-

n = input("\nInsira o valor de N: ")

aux = 0
f1 = 0
f2 = 1
i = 0

while(f1 < n):
	print "Fibonacci",i+1,"-",f1
		
	aux = f1 + f2
	f1 = f2
	f2 = aux
print "\n"