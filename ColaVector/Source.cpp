#include "cola.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
	Cola fila;

	cout << "Llega -> 7" << endl;
	fila.enqueue(7);
	cout << "Llega -> 22" << endl;
	fila.enqueue(22);
	cout << "Llega -> 26" << endl;
	fila.enqueue(26);
	
	cout << endl;
	cout << "Mostrando el siguiente elemento en salir: " << fila.siguiente() << endl;

	cout << endl;
	cout << "Sale -> " << fila.dequeue() << endl;
	cout << "Sale -> " << fila.dequeue() << endl;
	cout << "Sale -> " << fila.dequeue() << endl;
	cout << endl;

	cout << "Numeros en cola -> " << fila.siguiente() << endl;
	
	return 0;
}