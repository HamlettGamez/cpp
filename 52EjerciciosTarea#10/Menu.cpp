#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int opcion=0;
	
	while (true){
		cout<< "\t\t\t****"<<endl;
		cout<< "\t\t\tMENU!"<<endl;
		cout<< "\t\t\t****"<<endl;
		
		cout<< "1 - Cafe y Granitas "<<endl;
		cout<< "2 - Reposteria "<<endl;
		cout<< "0 - Salir"<<endl;
		
		cout<< "Ingrese una opcion del menu: "<<endl;
		cin>>opcion;
		
		if (opcion == 1){
			system ("cls");
			cout<< "Entro al menu de cafe y granitas! "<<endl;
			system("pause");
		}
		if (opcion == 2){
			system ("cls");
			cout<< "Entro al menu de reposteria! "<<endl;;
			system("pause");
		}
		if (opcion == 0){
			break;
		}
	}
	cout<<endl;
	cout<<"Salistes del Sistema";
	return 0;
}
