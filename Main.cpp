//TP #1, uso de variables y valores
//Juan M. Altamirano / K1051 / Leg: 1539565
//12/04/2015

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int suma;
    int resta;
    int restab;
    int div;
    bool c;
    cout << "Ingrese un valor:" << "  ";
    cin >> a;
    cout << "Ingrese un segundo valor:"<< "  ";
    cin >> b;
    suma = a+b;
    cout << endl << "La suma de" << " " << a << " " << "+" << " " << b << " " << "es =" << "  " << suma << endl;
    resta = a-b;
    cout << "La resta de" << " " << a << " " << "-" << " " << b << " " << "es =" << "  " << resta << endl;
    restab = b-a;
    cout << "La resta de" << " " << b << " " << "-" << " " << a << " " << "es =" << "  " << restab << endl;
    div = a%b;
    cout << "El resto de la division entera entre" << " " << a << " " << "y" << " " << b << " " << "es =" << "  " << div << endl;
    c = a<b;
    cout << endl << "Es" << " " << a << " " << "menor que" << " " << b << " " << "? :" << "  " << c << endl;
    cout << endl << "(Tomar 0 como FALSO, y 1 como VERDADERO)" << endl;

   return 0;
}
