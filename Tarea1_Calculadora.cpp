#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int respuesta=0;
	
	cout<< "Ingrese el 1er valor " <<endl;
	cin >> a;
	cout<< "Ingrese 2do valor " <<endl;
	cin >> b;
	
	//suma
	respuesta = a+b ;
	cout<< "La suma de los dos valores es: " <<respuesta <<endl;
	
	//resta
	respuesta = a-b ;
	cout << "La resta de los dos valores es: " << respuesta <<endl;
	
	//multiplicacion
	respuesta = a*b ;
	cout<< "La  multiplicacion de los dos valores es: "<< respuesta <<endl;
	
	//division
	respuesta = a/b;
	cout<< "La division de los dos valores es :" <<respuesta <<endl;
	
	return 0;
}
