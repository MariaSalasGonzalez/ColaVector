// Cola.h
// Declaración de la clase Cola

#ifndef COLA_H
#define COLA_H

#define MAX 20

class Cola {
	public:
		Cola();
		~Cola();
		void enqueue(const int);
		int dequeue();
		int siguiente();
	private:
		unsigned int cola[MAX];
		short int head; //salida
		short int tail;  //entrada
		bool estaVacia();
};

#endif

