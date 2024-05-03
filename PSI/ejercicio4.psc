Proceso ejercicio4
	
	Definir nota, promedio, i Como Real;
	Definir sumaNotas Como Real;
	
	sumaNotas <- 0;
	
	Para i <- 1 Hasta 10 Con Paso 1 Hacer;
		Escribir "Ingrese la nota ", i, ": ";
		Leer nota;
		sumaNotas <- sumaNotas + nota;
	FinPara
	
	promedio <- sumaNotas/10;
	
	Escribir "Promedio general del grupo: ", promedio;
	
FinProceso