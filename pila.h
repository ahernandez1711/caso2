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
        Pila()
        {
        listaPila = new Lista();
    }
        void push(Producto* producto)
        {
        listaPila->insertarEnPosition(0, producto);
    }
        Producto* pop()
        {
        return listaPila->remover(0);
    }
        Producto* top()
        {
        Producto* resultado = NULL;

        if (!listaPila->vacia())
        {
            resultado = listaPila->encontrarConPosition(0);
        }
        return resultado;
    }

        bool vacia()
        {
        return listaPila->vacia();
    }

};

/* ¿Qué es una pila?

La lista de productos que se encuentra en el camión es una pila
La lista de productos que se crea para el pedido es una pila

*/