#include <iostream>

using namespace std;

int sumar() {
    return 5 + 7;
}

string nombrecompleto() {
    string nombre = "Hamlett"
    string apellido = "Perez"
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreyapellido = nombrecompleto();

cout << resultado;

cout << endl;

    return 0;
}
