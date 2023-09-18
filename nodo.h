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
        Nodo()
        {
            producto = NULL;
            siguiente = NULL;
        }

        Nodo(Producto* pProducto)
        {
            this->producto = pProducto;
            siguiente = NULL;
        }

        Producto* getDatos() //Se retornan los datos de un producto
        {
            return producto;
        }

        Nodo* getSiguiente() //Se retorna el siguiente producto de la lista
        {
            return siguiente;
        }

        void apuntarSiguiente(Nodo* elemento) //Se apunta al siguiente elemento de la lista
        {
            this->siguiente = elemento;
        }
};