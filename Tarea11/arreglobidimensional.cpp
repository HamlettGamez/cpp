#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])

{
	int nombres[5][5];
	int suma =0;
	srand(time(NULL));
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			nombres[i][j]=1+rand()%10;
			cout << nombres[i][j] << "  ";
		}

		cout << endl;
		}
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 5; j++){
			suma = suma + nombres[i][j];
		}
	}
	  
	cout << endl;	
	cout << "Total Suma: " << suma << endl;
	cout << endl;
	
	
	return 0;
}
