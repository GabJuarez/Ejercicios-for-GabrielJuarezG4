/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/
#include<iostream>

using namespace std;

int main() {
    float notes[8], sum = 0.0, average;
    int approved = 0, failed = 0;

    cout << "Enter the grades of the 8 students: " << endl;

    for(int i = 0; i < 8; i++) {
        cin >> notes[i];
        sum += notes[i];

        if(notes[i] >= 70) {
            approved++;
        } else {
            failed++;
        }
    }

    average = sum / 8.0;

    cout << "Number of approved students: " << approved << endl;
    cout << "Number of failed students: " << failed << endl;
    cout << "Overall average of the group: " << average << endl;

    return 0;
}