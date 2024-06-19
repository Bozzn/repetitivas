//Bucle de Fibonacci. 
#include <iostream>
#include <conio.h>
using namespace std;
int fibonacci(int);
int sumafb(int);
int main(){
    int n;
    char c;
    cout << "FIBONACCI:\nElija una de las opciones.\na) Si solo desea ver la serie.\nb) Si desea ver la suma de la serie.\n";
    cin >> c;
    cout << "Cuantas cifras desea sumar en la serie Fibonacci: "; cin >> n;
    switch (c)
    {
    case 'a':
        cout << fibonacci(n);
        break;
    case 'b':
        cout << "La suma de toda la serie es : " << sumafb(n);
    
    default:
        break;
    }
    
    return EXIT_SUCCESS;
}
int fibonacci(int n){
     int a = 0, b = 1, c = 0, i = 0;
     while (i < n)
    {
       a = b;
       b = c;
       c = a + b;
       i++;
       if (i == n) 
       {
       cout << c << ".";
       }
       else
       {
        cout << c << ", ";
       }
    }
}
int sumafb(int n){
     int a = 0, b = 1, c = 0, i = 0, s=0;
     while (i < n)
    {
       a = b;
       b = c;
       c = a + b;
       s = s + c;
       i++;
    }
    return s;
}