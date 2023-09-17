/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de las colas
*/

#include "lista.h"

class Cola {
private:
    Lista *listaCola;

public:
    Cola();
    void agregarFinal(Lista* dato);
    Nodo* sacarFinal();
    Nodo* frente();
    bool vacia();
};

//La lista de camiones que llega a dejar los productos es una cola
//La lista de productos en un pedido es una cola
//La lista de camiones que se lleva los productos es una cola