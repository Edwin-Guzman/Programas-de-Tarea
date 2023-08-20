Algoritmo pos_neg_nul
	
	Dimension cant(10);
	Definir pos,neg,nul,n,cant Como Entero
	
	pos<-0
	neg<-0
	nul<-0
	
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese el valor numero ",i
		Leer n
		si (n>=1) Entonces
			pos<-pos+1
		SiNo
			si(n<=-1) Entonces
				neg<-neg+1
			SiNo
				nul<-nul+1
			FinSi
			
		FinSi
	FinPara
	
	Escribir "Ingreso ",pos," numeros positivos" 
	Escribir "Ingreso ",neg," numeros negativos"
	Escribir "Ingreso ",nul," numeros nulos"
	
FinAlgoritmo
