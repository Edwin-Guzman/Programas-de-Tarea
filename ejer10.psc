Algoritmo operaciones_basicas_matematica
	
	Escribir "Ingrese un primer numero: "
	Leer num1
	Escribir "Ingrese el segundo numero: "
	Leer num2
	Escribir "Ingrese un operador (+,-,*,/) : "
	Leer op
	
	Segun op Hacer
		"+":
			Escribir "Suma: ", (num1+num2)
		"-":
			Escribir "Resta: ", (num1-num2)
		"*":
			Escribir "Multiplicacion: ", (num1*num2)
		"/":
			Escribir "Division: ", (num1/num2)
		De Otro Modo:
			Escribir "Operador no valido."
	FinSegun
	
	
FinAlgoritmo
