#include <iostream>

using namespace std;

double subtotal;
string listaProductos;
float iva;

void agregarProducto(string descripcion, int cantidad, double precio);
{
	listaProductos= listProductos + descripcion + '\n';
	subtotal = subtotal+(cantidad * precio);
 	
}
void imprimirFactura()
{
	system("cls");
	cout<<"FACTURA"<<endl;
	cout<<endl;
	
	
	cout<<"Productos:"<<ednl;
	cout<< listaProductos;
	
	cout<<endl;
	cout<<"Subtotal: "<<subtota;
	
	
	isv=subtotal* .12;
	cout<<" El ISV a pagar es: L "<<isv<<endl;
	cout<<" El total a pagar con el ISV es: L"<< subtotal + iva;
}
