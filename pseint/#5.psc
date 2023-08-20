Algoritmo cadena_de_caracteres
	
	Definir num, sw Como Entero
	Definir cadena Como Caracter
	
	cadena<- ""
	Para sw <-1 Hasta 5 Con Paso 1 Hacer
		Escribir "Ingrese un numero: "
		Leer num
		
		si num>0 Entonces
			cadena<-Concatenar(cadena,ConvertirATexto(num))
		FinSi
	FinPara
	
	Escribir cadena
FinAlgoritmo
