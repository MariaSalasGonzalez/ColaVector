// Cola.cpp
// Implementación de la clase Cola

#include "cola.h"

// Constructor
Cola::Cola() : head{ 0 }, tail { 0 }, cola{ 0 }{}

// Destructor
Cola::~Cola(){}

// Inserta un nuevo elemento en la cola si no está llena
void Cola::enqueue(const int elemento) {
	if (tail == MAX - 1)
		tail = 0;
	else
		++tail;
	// Verifica si la cola está llena
	if (tail == head)
		return;
	cola[tail] = elemento;

}

// Recupera el elemento de la cola si no está vacía
int Cola::dequeue() {
	if (estaVacia())
		return -1;
	
	if (head == MAX - 1)
		head = 0;
	else
		++head;

	return cola[head];
}

// Muestra el siguiente elemento en la cola (próximo en salir)
int Cola::siguiente() {
	if (estaVacia())
		return -1;

	int tmp;
	if (head == MAX - 1)
		tmp = 0;
	else
		tmp = head + 1;

	return cola[tmp];
}

// Retorna "true" si la cola está vacía. "false", en caso contrario
bool Cola::estaVacia() {
	return (head == tail);
}