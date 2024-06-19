//Intervalo de numeros primos dentro de 2 numeros.
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int MS(int, int);
int Dg(int, int);

int main(){
    int a, b;
    cout << "Ingrese 2 dígitos y le dare los numeros primos que se encuentren en su intervalo.\n";
    cout << "Ingrese el primer digito: "; cin >> a;
    cout << "Ingrese el segundo digito: "; cin >> b;
    if ((Dg(a,b)) == 1)
    {
        cout << MS (a, b);
    }
    else
    {
       cout << "Limite del listado mal ingresado, fin del programa.";
    }
    return EXIT_SUCCESS;
}

int Dg (int n1, int n2){
    if (n1 >= n2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int MS(int n1, int n2){
    int i = n1, j = 1, y = 0;
    while (i <= n2 )
    { 
        while (j <= i)
        {
           if ( i % j == 0)
           {
             y++;
           }
           j++;
        }
        if (y == 2)
        {
           cout << i << endl;
        }
        y=0;
        j=1;
        i++;
    }   
}
