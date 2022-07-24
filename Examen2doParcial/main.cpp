#include<iostream>   
#include<windows.h>
#incluir "juego.h" 

Uso de STD de espacio de nombres ;

#definir ARRIBA 72

#definir IZQUIERDA 75

#definir ABAJO 80

#definir DERECHA 77

#definir CES 27

int main(){

char tecla;
	int puntos=0;
	int xPos=30, yPos=20;

	inicializarArreglo();
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);cout<<(char)4;	

	while(tecla != 27 && gameover() )
	{
	    proceso(tecla, puntos);
	}

	si ( ! gameover())
	{
		MessageBoxA(NULL,"Has Perdido","Perdedor", MB_OK);
		system("cls");
	}

	system("pausa>NULL");
	volver 0;
}
