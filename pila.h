/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de las pilas
*/

#include "lista.h"

class Pila {
    private:
        Lista* listaPila;

    public:
        Pila();
        void push(Nodo* dato);
        Nodo* pop();
        Nodo* top();
        bool vacia();

};

//La lista de productos que se encuentra en el camión es una pila
//La lista de productos que se genera en un pedido es una pila