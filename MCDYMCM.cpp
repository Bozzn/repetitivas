//MCM y MCD de de 2 numeros.
#include <iostream>
#include <conio.h>
using namespace std;
int MCD(int, int);
int MCM(int, int);

int main(){
    int a, b, i;
    int op;
    do 
    {
    cout << "Ingrese una de las casillas: " << endl << "1.- MCM y MCD:" << endl << "0.- Fin del programa:" << endl; cin >> op;

    switch (op)
    {
    case 1:
        cout << "Ingrese el primero valor: "; cin >> a;
        cout << "Ingrese el segundo valor: "; cin >> b;
        cout << "MCD: " << MCD(a, b)<< endl;
        cout << "MCM: " << MCM(a, b)<< endl;
        i=op;
        
        break;
    case 0:
        i=0;
        break;
    default: 
        cout << "Caracter mal invalido, intente nuevamente: ";
        i=op;
        break;
    }
    } while (i != 0);
    return EXIT_SUCCESS;
}
int MCD(int a, int b) {
    if (b == 0) 
    {
        return a;
    }
    return MCD(b, a % b);
}
int MCM(int a, int b){
    return (a * b) / MCD(a, b);
}