/*7. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> vectorSuma(longitud);

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Suma de los dos vectores 
    for (int i = 0; i < longitud; ++i) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;
    return 0;
}
