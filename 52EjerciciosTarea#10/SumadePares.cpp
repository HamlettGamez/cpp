#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int pares=0,impar=0,suma=0;
	
	for (int i =1; i<=10; i++)
	{
		if (i%2==0){
			pares =pares +i;
		}
				cout <<i<<"";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Total pares: "<<pares<<endl;
	
	return 0;
}
