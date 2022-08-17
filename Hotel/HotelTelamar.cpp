/*
Reservaciones de hotel:
clientes, habitaciones disponibles, fechas de reservacion
*/

#include<iostream>
#include<windows.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<time.h>

using namespace std;

	// Variables globales
	bool encendido = 1;
	float primera = 0, segunda = 25,tercera = 50 , cuarta = 75;
	float sencilla = 200 ,doble = 400 ,triple = 600;
	float p1 = 100,p2 = 75, t_edad = 30;
	int op,pl,h,cl,edad,discapacitado,num_h,precio,suma, aleatorio,n,t_s,t_d,t_t,total,descuentos,comida,bebida,precio2;
	string clientes[20];
	const int DESDE = 1;
	const int HASTA = 20;
	int plantas = 5;
	int habitaciones = 4;
	int hab[5][4];
	int c = 1;
	
	//Definicion de funciones
	int generaAleatorio(int limInferior, int limSuperior);
	void mostrarhabitaciones();
	void inicializarHabit();
	void init();
	void reservar();
	void vender();
	void inventario();
	void precios();
	int  salir();
	void rifa();
	void menu(int);
	int main()
	{
	setlocale(LC_ALL, "Spanish"); 
    init();
	}

void init()
	{
		system("cls");
		
		cout << endl << endl;
		cout << "\t\t\tTELAMAR HOTEL Y RESORT S.A. de C.V.\n\t\t\tTELA/ATLANTIDA\n\t\t\tTel: (504) 2448-3916\n\t\t\twww.telamaresort.hn\n";
		cout << "\n\t\t\t   Escoja una de las siguientes opciones: " <<endl << endl;
		cout << "\t\t\t   1. - Reservar"<< endl << endl;
		cout << "\t\t\t   2. - Vender"  << endl << endl;
		cout << "\t\t\t   3. - Precios" << endl << endl;
		cout << "\t\t\t   4. - Estado de las habitaciones" << endl << endl;
		cout << "\t\t\t   5. - Inventario"  << endl << endl;
		cout << "\t\t\t   6. - Salir"  << endl << endl;
		cout << "\t\t\t   7. - Rifa diaria por habitación" << endl;
	    cout << "\n\t\t\t   Escribe el numero de la opcion que escogió: ";
	    cin  >> op;
    
   		return menu(op);
	}	

void menu(int opcion){
	switch(opcion){
		case 1:
			reservar();
		break;	
		case 2:
			vender();
		break;
		case 3:
			precios();
		break;
		case 4:
			mostrarhabitaciones();
		break;
		case 5:
			inventario();
		break;
		case 6:
			salir();
		break;
		case 7:
			rifa();
		default: cout << " \n\t\t\t   No esta en el rango de 1 - 7  "; break;
		}
	}	
void reservar()
	{
	
	system("cls");
		cout <<"\n\n\t\t\tIngrese el nombre completo " << endl;
		cout <<"\t\t\t";
		cin.ignore();
		getline(cin,clientes[cl]);
		
		cout << "\n\t\t\t¿Cuantos años tiene?" << endl;
		cout << "\t\t\t";
		cin >> edad;
		
		cout << "\n\t\t\t¿Esta Discapacitado(a)?, considere que si = 1 y no = 0 " << endl;
		cout << "\t\t\t";
		cin >> discapacitado;
		if((edad>=60)||(discapacitado == 1))
		{
			cout<< "\n\t\t\t¿En que planta le gustaria hospedarse? " << endl << endl;
			cout << "\t\t\t1. - Primera" << endl;
		    cout << "\t\t\t2. - Segunda"  << endl;
		    cout << "\t\t\t3. - Tercera" << endl;
		    cout << "\t\t\t4. - Cuarta"  << endl;
			cout << "\t\t\tPlanta seleccionada:  ";
			cin>>pl;	
		}
		
			cout<<"\n\n\t\t\t¿Que tipo de habitación desea?"<< endl <<endl;
			cout << "\t\t\t0. - Sencilla"<<endl;
	        cout << "\t\t\t1. - Doble"  <<endl;
	        cout << "\t\t\t2. - Triple" <<endl;
	        cout << "\t\t\tTipo de habitación seleccionado:  ";
	        cin>>h;
	        
	        if(h== 2){h+=1;}
	        if((h==1)&&(hab[pl-1][h]!=0)){h == 2;}
	    
	        switch(h)
			{
	        	case 0:
	        	num_h = pl*100 + primera;
	        	precio = sencilla;
	        	t_s += 1;
	        	break;
	        	case 1:
	        	num_h = pl*100 + segunda;
				precio = doble;	
				t_d += 1;
	        	break;	
	        	case 2:
	        	num_h = pl*100 + tercera;	
	        	precio = doble;
	        	t_d += 1;
	        	break;	
				case 3:
	        	num_h = pl*100 + cuarta;
				precio = triple;
				t_t += 1;	
	        	break;			
			}
		
			hab[pl-1][h]==1;
			    
			switch(pl){
				case 1:
				precio = precio + (precio*p1/100);
				break;
				case 2:
				precio = precio + (precio*p2/100);
				break;
			}
			if(edad >= 60 ){
				precio = precio - (precio*t_edad/100);
				descuentos += 1;
			}
			total = total + precio;
			system("cls");
			cout<<"\n\n\n\t\t\tSu reservacion ha sido hecha con exito a nombre de: "<<clientes[cl]<<endl;
			cout<<"\t\t\tEn la planta: "<<pl<<endl;
			cout<<"\t\t\tCon el numero de habitación: "<<num_h<<endl;
			cout<<"\t\t\tCon un precio de: L."<<precio<<endl;
			cout<<"\t\t\t";
			cl += 1;
            system("pause");
			return init();
	}	
void vender()
	{
	
 		system("cls");
 		cout << "\t\t\tTELAMAR HOTEL Y RESORT S.A. de C.V.\n\t\t\tTELA/ATLANTIDA\n\t\t\tTel: (504) 2448-3916\n\t\t\twww.telamaresort.hn\n";
        	cout << "\n\n\t\t\t -------- MENU  ------- " << endl;
        	cout << " \n\n\t\t\t 1.- Desayunos 90 LPS. \n\n\t\t\t 2.- Almuerzo 120 LPS. \n\n\t\t\t 3.- Cena 160 LPS \n\n\t\t\t 4.- Meriendas 50 LPS " << endl;
        	cout << " \n\n\t\t\t Seleccione una comida: ";
        	cin>>comida;
        	cout << "\n\t\t\t Comida seleccionada: " << comida << endl;
        	switch(comida)
			{
	        	case 1:
	        	precio2 = 40;
				total = total + precio2;
	        	break;
	        	case 2:
	        	precio2 = 60;
				total = total + precio2;
	        	break;
				case 3:
	        	precio2 = 45;
				total = total + precio2;
	        	break;
				case 4:
	        	precio2 = 25;
				total = total + precio2;
	        	break;			
			}
            
			system("pause");
            system("cls");
             
            cout << "\n\t\t\t * Bebidas * " << endl << endl;
            cout << "\n\t\t\t 1.- Jugo de Tamarindo   30LPS " << endl;
            cout << "\n\t\t\t 2.- Jugo de Naranja     25LPS " << endl;
            cout << "\n\t\t\t 3.- Coca Cola o Pepsi   18LPS " << endl;
            cout << " \n\n\t\t\t Seleccione una bebida: ";
            cin>>bebida;
            cout << "\n\t\t\t Bebida seleccionada: " << bebida << endl;
            
            switch(bebida)
			{
                case 1:
            	precio2 = precio2 + 20;
				total = total + precio2;
            	break;
            	case 2:
            	precio2 = precio2 + 15;
				total = total + precio2;
            	break;
				case 3:
            	precio2 = precio2 + 25;
				total = total + precio2;
            	break;		
			}
				
             cout << "\n\t\t\t Total a pagar : " << precio2 << endl;
             system("pause");
			 return init();	
	}
void inventario()
	{
		system("cls");
		
		cout << endl << endl;
		cout << endl;
		cout << "\t\t\t |--- Inventario de gastos de consumo --- |" << endl;
		cout << "\n\n\t\t\t  Total ingreso:                   L." << total  << endl << endl;
		cout << "\t\t\t  Vental Habitaciones Sencillas      " << t_s << endl << endl;
		cout << "\t\t\t  Vental Habitaciones Dobles         " << t_d << endl << endl;
		cout << "\t\t\t  Vental Habitaciones Triples        " << t_t << endl << endl;
		cout << "\t\t\t  Descuentos aplicados               " << descuentos  << endl << endl;
	    system("pause");
	    return init();

	}
void precios()
	{
		system("cls");
		
		cout << endl << endl;
	    cout << " \t\t\t Precios de las Habitaciones Planta 1 y Planta 2: " << endl << endl;
	    cout << " \t\t\t a. Habitaciones sencillas -------> 100 LPS     320 LPS " << endl;
	    cout << " \t\t\t b. Habitaciones dobles    -------> 200 LPS     520 LPS " << endl;
	    cout << " \t\t\t c. Habitaciones triples   -------> 400 LPS     800 LPS " << endl << endl;
	    cout << " \t\t\t Precios de las Habitaciones Plantas 3 y 4: " << endl << endl;
	    cout << " \t\t\t a. Habitaciones sencillas -------> 400 LPS     654 LPS " << endl;
	    cout << " \t\t\t b. Habitaciones dobles    -------> 580 LPS     700 LPS " << endl;
	    cout << " \t\t\t c. Habitaciones triples   -------> 640 LPS     750 LPS " << endl << endl;
	    cout << " \t\t\t Precios de Alimentos: " << endl << endl;
	    cout << " \t\t\t a. Desayunos              ------->  90 LPS              " << endl;
	    cout << " \t\t\t b. Almuerzos              ------->  120 LPS             " << endl;
	    cout << " \t\t\t c. Cenas                  ------->  160 LPS             " << endl;
	    cout << " \t\t\t d. Meriendas              ------->  50 LPS              " << endl << endl; 
	    cout << " \t\t\t -- ADULTOS DE TERCERA EDAD RECIBEN UN DESCUENTO DEL 50% " << endl;
		system("pause");
		return init();
	}
int  salir()
	{

		system("cls");
		cout << "\n\n\t\t\t ------------ Gracias por preferir nuestro Hotel vuelva pronto ---------- " <<endl;
		cout << endl;

    return 0;
	
	}
void rifa()
	{
	system ("cls");
	
	cout << endl << endl;
    cout << "\t\t\t\t\t  Rifa de Habitaciones " << endl << endl;
    cout << "\n\t\t\t Numeros aleatorios entre " << DESDE << " y " << HASTA << endl;
    cout << "\n\t\t\t Las habitaciones son contadas desde la primera planta" <<endl; 
	cout<<  "\t\t\t Contando como 0 hasta la ultima pplanta contando como 20" <<endl; 
	cout<<  "\n\n\t\t\t Las habitaciones ganadoras reciben desayuno gratis" <<endl; 
    cout << "\t\t\t Cuantas habitaciones desea rifar?: ";
    cin >> n;
    cout<<  "\n\n\t\t\t";
    
   for (int i = 1; i <= n; i ++)
   {
    	aleatorio = rand()% (HASTA - DESDE + 1) + DESDE;
    	cout << aleatorio << " ";
   		suma += aleatorio;
   }
 
   cout << endl << endl;
 
   system("pause");
   return init();
	}
int generaAleatorio(int limInferior, int limSuperior)
	{
		srand(time(NULL));// inicializar semilla random 
		int aleatorio;
		aleatorio = limInferior+ rand() %(limSuperior +1 -limInferior);
		return aleatorio;
	}
	
void mostrarhabitaciones()
	{
		system("cls");
		cout << endl << endl;
		cout << " \t Estado de Habitaciones: "<<endl;
		cout << " \t Las Habitaciones reservadas estan señalizadas con: "<<endl<<endl;
		cout << " \t Ocupadas: [1]"<<endl;
		cout << " \t Libres:   [0]"<<endl<<endl;
			
		cout<<"\t\t\t (H01)\t(H02)\t(H03)\t(H04)"<<endl;
			
	for(int i=0; i < plantas; i++)
	{
	
		cout<<"\tPlanta "<< c++ << ") ";
		
		for(int j=0; j < habitaciones; j++)
		{
			cout<<"\t [" << hab[i][j]<<"]  ";
		}
			cout <<"\n\n";
	}

		system("pause");
		return init();
	}
void inicializarHabit()
	{
		for(int i=0; i < plantas; i++)
		{
			for(int j=0; j < habitaciones; j++)
			{
				hab[i][j] = generaAleatorio(0,1);
			}
			cout <<"\n";
		}
	}
