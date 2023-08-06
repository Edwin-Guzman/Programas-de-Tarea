Algoritmo arreglo_deter_mayor
	
	Dimension  arreglo[10]
	Para fila =1 Hasta 10 Con Paso 1 Hacer
		Escribir "Valor ", fila,"/10 : "
		Leer arreglo[fila]
	FinPara
	
	Escribir "Ingrese un numero : "
	Leer num

	Escribir Sin Saltar "Los elementos mayores que ",num, " son: "
	
	Para fila=1 Hasta 10 Con Paso 1 Hacer
		si (arreglo[fila]>num) Entonces
			Escribir Sin Saltar arreglo[fila], ","
		FinSi
	FinPara
	
FinAlgoritmo
