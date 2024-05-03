/*9. Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include<iostream>

using namespace std;

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rA, cA, rB, cB;

    cout << "Enter the dimensions of the first matrix: ";
    cin >> rA >> cA;

    cout << "Enter the elements of the first matrix: ";
    for(int i = 0; i < rA; i++) {
        for(int j = 0; j < cA; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the dimensions of the second matrix: ";
    cin >> rB >> cB;

    if(cA!= rB) {
        cout << "The matrices cannot be multiplied." << endl;
        return 0;
    }

    cout << "Enter the elements of the second matrix: ";
    for(int i = 0; i < rB; i++) {
        for(int j = 0; j < cB; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rA; i++) {
        for(int j = 0; j < cB; j++) {