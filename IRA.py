# -*- coding:utf-8 -*-

chTOTAL = 0
iraFINAL = 0

tSemestre = input("Semestres a caulcular: ")
chTrancadas = input("Carga horaria das disciplinas trancadas parcialmente: ")

def calcularIraSem(pesoSemI,semestre):
	global chTOTAL
	print "\nTotal de cadeiras cursadas no semestre", semestre, ": "
	tCadeirasSem = input()
	iraSNumerador = 0
	iraSDenominador = 0
	
	for i in range (tCadeirasSem):
		chNesima = input("\nCarga horaria: ")
		chTOTAL += chNesima
		notaNesima = input("Nota: ")
		iraSNumerador += (pesoSemI*chNesima*notaNesima)
		iraSDenominador += (pesoSemI*chNesima)

	iraR = (iraSNumerador/iraSDenominador)
	return iraR

for i in range (tSemestre):
	if(i <= 6):
		iraFINAL += calcularIraSem(i+1,i+1)
	else:
		iraFINAL += calcularIraSem(6,i+1)
	print "Ira do semestre ", i+1 ,": ", iraFINAL*1000
