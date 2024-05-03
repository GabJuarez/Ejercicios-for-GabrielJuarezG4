/*3. Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sumaCuadrados = 0;
    for (int i = 1; i <= 100; i++)
    {
    sumaCuadrados += i * i;

    }
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << sumaCuadrados << endl;

    return 0;
}


