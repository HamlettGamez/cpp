#include <iostream>

using namespace std;

    int sumar(int a, int b)
    {
        return a + b;
    }

    int calculadora(int a, int b, string operador)
    {
        if (operador == '+') {
            return sumar (a, b);
        }

        throw "El operador no existe ";

        return -1;
    }
     int main(int argc, char const *argv[])
     {
        int n1 = 0;
        int n2 = 0;
        int resultado = 0;
        char operador;
             
         cout << "Ingrese a: ";
         cin >> n1;
         cout << "Ingrese b: ";
         cin >> n2;
         cout << "Ingrese el operador (+, -, *, /): ";
         cin >> operador;

         cout << endl;

         try
         {
             resultado = calculadora(n1, n2, operador);
             cout << "Resultado de " << n1 << " " << operador << " " << n2 << "es:";
            cout << calculadora (n1,n2 operador);
         }
         catch(const char* error)
         {
             cout << error;
         }
         

         return 0;
     }
