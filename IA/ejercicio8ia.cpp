/*8. Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/
#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int vector1[n], vector2[n];

    cout << "Enter the elements of the first vector: ";
    for(int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Enter the elements of the second vector: ";
    for(int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    int dot_product = 0;

    for(int i = 0; i < n; i++) {
        dot_product += vector1[i] * vector2[i];
    }

    cout << "The dot product of the two vectors is: " << dot_product << endl;

    return 0;
}