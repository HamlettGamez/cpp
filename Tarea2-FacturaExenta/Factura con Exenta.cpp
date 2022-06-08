#include <iostream>

using namespace std;

int main (int srgc,char const *argv[])
{
	double subtotal=0;
	double total=0;
	double impuesto=0;
	int descuento=0;
	double calculoDescuento=0;
	double calculoImpuesto=0;
	char estaExenta;

	cout<< "Ingrese el subtotal de la  factura: ";
	cin >> subtotal;
	
	cout<< "Ingrese el descuento obtenido(0,10,15,20): ";
	cin>> descuento;
	
	cout<<"Factura exenta? S/N";
	cin>> estaExenta;
	if (estaExenta == 's' || estaExenta == 'S'){
		calculoImpuesto = 0 ;
	}
	if (estaExenta == 'n' || estaExenta == 'N'){
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15 ;
	}
	
	calculoDescuento = (subtotal * descuento)/100;
	total= subtotal - calculoDescuento + calculoImpuesto ; 
	
	cout << "Total a cancelar es: " <<total;
	
	
	return 0;
}
