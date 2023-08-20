Algoritmo Mostrar_el_numero_total_de_teclados_a_pagar
	
	Escribir "Ingrese la cantidad de teclados a comprar: "
	Leer cant
	
	Segun cant Hacer
		1,2,3: costo=100
		4,5,6,7,8: costo=90
		De Otro Modo: costo=85
	FinSegun
	
	Escribir "El costo por cada teclado es de: ", costo
	Escribir "El total a pagar es de: ",costo*cant
FinAlgoritmo
