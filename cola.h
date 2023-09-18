/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de las colas
*/

#include "lista.h"

class Cola {
private:
    Lista* listaCola;

public:
    Cola()
    {
        listaCola = new Lista();
    }

    void agregarFinal(Producto* producto)
    {
        listaCola->agregar(producto);
    }

    Producto* sacarInicio()
    {
        return listaCola->remover(0);
    }

    Producto* frente()
    {
        Producto* resultado = NULL;

        if (!listaCola->vacia())
        {
            resultado = listaCola->encontrarConPosition(0);
        }
        return resultado;
    }
    bool vacia()
    {
        return listaCola->vacia();
    }
};

/* ¿Qué es una cola?

La lista de camiones que llega a dejar los productos es una cola
La lista de productos en un pedido es una cola
La lista de camiones que se lleva las pilas de productos es una cola

*/