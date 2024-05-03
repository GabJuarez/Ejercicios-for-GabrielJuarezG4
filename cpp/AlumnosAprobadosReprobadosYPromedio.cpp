/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int numEstudiantes = 8;
    int sumaNotas = 0;
    int aprobados = 0;
    int reprobados = 0;

    for (int i = 1; i <= numEstudiantes; ++i)
    {
        int nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;

        sumaNotas += nota;

        if (nota >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
        
    }
    float promedio = sumaNotas / numEstudiantes;

    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Alumnos reprobados: " << reprobados << endl;
    cout << "Promedio del grupo: " << promedio << endl;

    return 0;
}