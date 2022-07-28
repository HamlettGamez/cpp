#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int opcion=0;

		cout<< "Ingrese una opcion del menu: "<<endl;
		cin>>opcion;
		
		switch (opcion)
		{
			case 1: {
			cout<< "Escogistes 1! "<<endl;
				break;
				}
				
			case 2: 
			cout<< "Escogistes 2! "<<endl;;
				break;
			
			case 3: 
			cout<< "Escogistes 3! "<<endl;;
				break;
			
				default:
					cout<<"Ingrese una opcion del 1 al 3"<<endl;
				break;
		}
	
	return 0;
}
