/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de los nodos
*/

#include "producto.h"

class Nodo {
    private:
        Producto* producto;
        Nodo* siguiente;
    
    public:
        Nodo();

        Nodo(Producto* producto);

        Producto* getDatos();

        Nodo* siguiente();

        void apuntarSiguiente(Nodo *pValue);
};