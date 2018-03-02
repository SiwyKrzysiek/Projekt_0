#include <iostream>
#include <stdlib.h>

using namespace std;

void badMallock();
void freeToSoon();
void loopedAlocation();

int main()
{
    badMallock();
    freeToSoon();

    return 0;
}

void badMallock()
{
    const int SIZE = 5;
    int* tab = (int*) malloc(SIZE); //Zapomnialem przemnozyc przez wielkosc elementu

    for (int i=0; i<SIZE; i++)
        tab[i] = i*2;

    cout << "Wielokrotnosci dwojki: ";

    for (int i=0; i<SIZE; i++)
        cout << tab[i] << " ";
    cout << endl;

    //Pamiec nie jest zwalniana
}

void freeToSoon()
{
    const int SIZE = 5;
    int* tab = (int*) malloc(SIZE*sizeof(*tab));

    {
        for (int i=0; i<SIZE; i++)
        tab[i] = i+1;
        /*...*/
    } //Jakies operacje na tablicy
    free(tab);

    cout << tab[2] << endl;
}

void loopedAlocation()
{

}


