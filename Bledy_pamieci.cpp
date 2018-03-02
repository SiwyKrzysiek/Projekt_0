#include <iostream>
#include <stdlib.h>

using namespace std;

void badMallock()
{
    const int SIZE = 5;
    int* tab = (int*) malloc(SIZE); //Zapomnialem przemnozyc przez wielkosc elementu

    for (int i=0; i<SIZE; i++)
        tab[i] = i*2;

    cout << "Wielokrotnosci dwojki: ";
    for (int i=0; i<SIZE; i++)
        cout << tab[i] << endl;

    //Pamiec nie jest zwalniana
}

int main()
{

    return 0;
}
