Proceso Ejercicio7
	Definir n, i Como Entero;
	Definir vector1, vector2, resultado Como Real;
	Dimension vector1[100], vector2[100], resultado[100];
	
	Escribir "Ingrese el tamaño de los vectores: ";
	Leer n;
	
	Escribir "Ingrese los elementos del primer vector: ";
	Para i <- 1 Hasta n Hacer
		Leer vector1[i];
	FinPara
	
	Escribir "Ingrese los elementos del segundo vector: ";
	Para i <- 1 Hasta n Hacer
		Leer vector2[i];
	FinPara
	
	Escribir "La suma de los vectores es: ";
	Para i <- 1 Hasta n Hacer
		resultado[i] <- vector1[i] + vector2[i];
	FinPara
	
	Escribir "El resultado de la suma: ";
	Para i <- 1 Hasta n Hacer
		Escribir resultado[i];
	FinPara

FinProceso
