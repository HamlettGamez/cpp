#include <iostream>

using namespace std;

extern void productos(int opcion);

void productos(int opcion)
{
    system("cls");

    switch (opcion)
    {
    case 1:
    {
    cout << "BEBIDAS CALIENTES" << endl;
    cout << "***************" << endl;
    system("pause");
        break;
    }
     case 2:
    {
    cout << "BEBIDAS FRiAS" << endl;
    cout << "***************" << endl;
    system("pause");
        break;
    }
    case 3:
    {
    cout << "REPOSTERIA" << endl;
    cout << "***************" << endl;
    system("pause");
        break;
    }
    default:
    break;
    }
}
