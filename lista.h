/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de las listas
*/

#include "nodo.h"
#include "producto.h"

class Lista {
    private:
        Nodo* primero;
        Nodo* ultimo;
        int cantidad;
        bool vacio;

    public:
        Lista();
        void agregar(Producto* producto);
        Nodo* getPrimero();
        int getTamaño();
        bool vacia();
        Producto* encontrar(int position);
        Producto* nombre(string nombre);
        void insertarFinal(int position, Producto *producto);
        void imprimir();
};

//Las zonas de almacenamiento son una lista
//Los pedidos son una lista