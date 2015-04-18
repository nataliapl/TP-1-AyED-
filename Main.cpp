//TP #1, uso de variables y valores
//Juan M. Altamirano / K1051 / Leg: 1539565
//Modificación: 18/04/2015

#include <iostream>
#include <cstring>

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
    double d;
    double f;
    double g;
    double h;
    char q[2];
    char w[2];
    string e;
    string r;
    string ty;

    cout << "Ingrese un valor:  ";
    cin >> a;
    cout << "Ingrese un segundo valor:  ";
    cin >> b;
    suma = a+b;
    cout << endl << ">> La suma de " << a << " + " << b << " es =  " << suma << endl;
    resta = a-b;
    cout << ">> La resta de " << a << " - " << b << " es =  " << resta << endl;
    restab = b-a;
    cout << ">> La resta de " << b << " - " << a << " es =  " << restab << endl;
    div = a%b;
    cout << ">> El resto de la division entera entre " << a << " y " << b << " es =  " << div << endl;
    c = a<b;
    cout << endl << ">> Es " << a << " menor que " << boolalpha << b << " ? :  " << c << endl;
    cout << ">> Es " << b << " menor que " << boolalpha << a << " ? :  " << !c << endl;
    cout << endl << endl << "--------------------------------------------------------------------" << endl;

    cout << endl << "Ingrese un valor:  ";
    cin >> d;
    cout << "Ingrese un segundo valor:  ";
    cin >> f;
    g = d/f;
    h = f/d;
    cout << endl << ">> El resultado de la division entre " << d << " y " << f << " es:  " << g << endl;
    cout << ">> El resultado de la division entre " << f << " y " << d << " es:  " << h << endl;
    cout << endl << endl << "--------------------------------------------------------------------" << endl;

    cout << endl << "Ingrese la primera letra de su nombre:  ";
    cin >> q;
    cout << "Ingrese la primera letra de su apellido:  ";
    cin >> w;
    strcat (q,w);
    cout << endl << ">> Sus iniciales son:  " << q << endl;
    cout << endl << endl << "--------------------------------------------------------------------" << endl;

    cout << endl << "Ingrese su primer nombre:  ";
    cin >> e;
    cout << "Ingrese apellido:  ";
    cin >> r;
    ty = e+r;
    cout << endl << ">> Su nombre contiene " << ty.size () << " letras" << endl;
    cout << endl << endl << "--------------------------------------------------------------------" << endl << endl;

   return 0;
}
