#include <iostream>
#include <stdlib.h>
#include <time.h>

using mamespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    // Inicializa El Numero Random
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {  

      //Genera un numero entre 1 y 10
     numero = rand() % 10 + 1;
     cout  << "Numero al azar: " << numero << endl; 
    }
       
    return 0;
}
