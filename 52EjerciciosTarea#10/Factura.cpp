#include <iostream>

using namespace std;

int main (int srgc,char const *argv[])
{
	double subtotal=0;
	double total=0;
	double Impuesto=0.15;
	

	cout<< "Ingrese el subtotal de la  factura: ";
	cin >> subtotal;
	
	total= subtotal + (subtotal *0.15) ; 
	
	cout << "Total a cancelar es: " <<total;
	
	
	return 0;
}
