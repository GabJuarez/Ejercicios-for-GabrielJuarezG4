/*2. Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // numeros impares del 1 al 100 de manera descendente
    for (int i = 99; i >= 1; i -= 2)
    {
        cout << i << " ";
    }

    return 0;
}
