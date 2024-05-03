#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
        int sumaPares = 0;
    for (int i = 100; i <= 200; i += 2)
    {
    sumaPares += i;

    }
    cout << "La suma de los pares entre 100 y 200 es: " << sumaPares << endl;
    return 0;
}


