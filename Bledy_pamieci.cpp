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
    loopedAlocation();

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

    for (int i=0; i<SIZE; i++)
        tab[i] = i+1;

    free(tab);

    cout << tab[2] << endl; //Proba dostepu mimo zwolnienia pamieci
}

void loopedAlocation()
{
    const int SIZE = 5;
    int* tab;

    for (int i=0; i<SIZE; i++)
    {
        tab = (int*) malloc(SIZE*sizeof(*tab)); //Wywolanie wielokrotne malloc w pentli
    }

    free(tab);
}


