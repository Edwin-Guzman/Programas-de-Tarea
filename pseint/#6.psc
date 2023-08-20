Algoritmo Llenar_de_forma_aleatoria_un_vetor
	
	
	Escribir "Ingrese el tamaño del vector: "
	Leer n
	
	Dimension vector[n]
	Para f=1 Hasta n Con Paso 1 Hacer
		vector[f]= azar(20)
		Escribir Sin Saltar vector[f]," "
	FinPara
	
	Escribir "Estos son los numeros primos de " ,n
	Para f=1 Hasta n Con Paso 1 Hacer
		r=0
		
		Para p=1 Hasta vector[f] Con Paso 1 Hacer
			si(vector[f] mod p==0) Entonces
				r=r+1
			FinSi
		FinPara
		si(r==2) Entonces
			Escribir Sin Saltar vector[f], " "
			suma=suma+1
		FinSi
	FinPara
	
	Escribir "Este es el total de numeros primos de " , n ,sum
	
FinAlgoritmo
