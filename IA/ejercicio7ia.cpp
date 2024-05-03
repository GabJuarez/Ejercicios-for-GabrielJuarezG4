/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/
#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int vector1[n], vector2[n], result[n];

    cout << "Enter the elements of the first vector: ";
    for(int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Enter the elements of the second vector: ";
    for(int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for(int i = 0; i < n; i++) {
        result[i] = vector1[i] + vector2[i];
    }

    cout << "The sum of the two vectors is: ";
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}