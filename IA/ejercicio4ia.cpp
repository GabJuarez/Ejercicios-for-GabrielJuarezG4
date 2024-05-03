/*4. Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include<iostream>

using namespace std;

int main() {
    float notes[10], sum = 0.0, average;

    cout << "Enter the grades of the 10 students: " << endl;

    for(int i = 0; i < 10; i++) {
        cin >> notes[i];
        sum += notes[i];
    }

    average = sum / 10.0;

    cout << "The overall average of the section is: " << average << endl;

    return 0;
}