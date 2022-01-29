//
//  FloatAverage - uśrednij 3 liczby używając arytmetyki zmiennoprzecinkowej.
//                 W pozostałym aspekcie identyczny z IntAverage.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    float fValue1;
    float fValue2;
    float fValue3;

    // wprowadź trzy liczby
    cout << "Program uśrednia liczby używając "
         << "arytmetyki zmiennoprzecinkowej\n\n";
    cout << "Wprowadź trzy liczby:\n";

    cout << "f1 - ";
    cin  >> fValue1;

    cout << "f2 - ";
    cin  >> fValue2;

    cout << "f3 - ";
    cin  >> fValue3;

    // zsumuj liczby podzielone przez trzy
    cout << "n1/3 + n2/3 + n3/3 = ";
    cout << fValue1/3 + fValue2/3 + fValue3/3;
    cout << "\n";

    // podziel sumę liczb przez trzy
    cout << "(n1 + n2 + n3)/3   = ";
    cout << (fValue1 + fValue2 + fValue3) / 3;
    cout << "\n";

    // aby pozwolić użytkownikowi zobaczyć wynik programu
    // przed zakończeniem programu, poczekaj, aż użytkownik będzie gotowy
    cout << "Naciśnij Enter, aby kontynuować..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
