#include <iostream>
#include <string>

using namespace std;

int main()
{
    int suma;
    for (int i=1; i<=5; i++)
        suma += i;

    cout << "Suma cyfr od 1 do 5 wynosi: " << suma << endl << endl;

    string dniTygodnia[] = {"Poaniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela"};

    cout << "Dni tygodnia od tylu to:" << endl;
    for (int i=6; i>=0; i++)
        cout << dniTygodnia[i] << endl;

    return 0;
}
