/*10.Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include<iostream>

using namespace std;

int main() {
    int matrix[10][10], transpose[10][10];
    int r, c;

    cout << "Enter the dimensions of the matrix: ";
    cin >> r >> c;

    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "The transposed matrix is: " << endl;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}