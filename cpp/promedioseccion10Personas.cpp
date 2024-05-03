/*4. Realice un programa que permita calcular y dar como salida el promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int estudiantes = 10;
    int SumaDeNotas;
    int promedio;

    for (int i = 1; i <= estudiantes; i++)
    {
        int nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        SumaDeNotas += nota;
    }
    //Calculando el promedio
        promedio= SumaDeNotas/estudiantes;
        cout << "El promedio de general de la seccion es: " << promedio << endl;
    return 0;
}
