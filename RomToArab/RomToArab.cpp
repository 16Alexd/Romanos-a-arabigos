#include <iostream>
#include "Romanos.h"
using namespace std;

int main()
{
	char romano[20], opcion;
	Romanos * romanos = new Romanos();

	cout << "Bienvenido a el programa\n";

	do {
		cout << "Ingrese el numero romano: ";
		cin >> romano;

		cout << "El numero arabigo es: " << romanos->romToDec(romano) << endl;

		cout << "Desea salir del programa? (S/s): ";
		cin >> opcion;

	} while ((opcion != 'S') && (opcion != 's'));
}
