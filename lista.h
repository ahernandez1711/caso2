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
        Nodo* buscarPosition = NULL;
        Nodo* buscarAtras = NULL;

    public:
        Lista()
        {
            primero = NULL;
            ultimo = NULL;
            cantidad = 0;
            vacio = true;
        }

        void agregar(Producto* producto) //Se agrega un elemento al final lista
        {
            Nodo *newNodo = new Nodo(producto);

            if (cantidad > 0) {
                this->ultimo->apuntarSiguiente(newNodo);
                this->ultimo = newNodo;
            } else {
                this->primero = newNodo;
                this->ultimo = newNodo;
            }

            vacio = false;
            cantidad++;
        }

        Nodo* getPrimero() //Se retorna el primer elemento de la lista
        {
            return this->primero;
        }

        int getTamaño() //El tamaño de la lista
        {
            return cantidad;
        }

        bool vacia() //Si está vacía
        {
            return !cantidad;
        }

        Producto* encontrarConPosition(int position) //Encontrar un elemento si se tiene su posición
        {
            Producto* resultado = NULL;
            buscarPosition = this->primero;
            buscarAtras = NULL;

            if (position<getTamaño()) {

                while(position > 0) {
                    buscarAtras = buscarPosition;
                    buscarPosition = buscarPosition->getSiguiente();
                    position--;
                }
                resultado = buscarPosition->getDatos();
            }

            return resultado;
        }

        void insertarEnPosition(int position, Producto* producto) //Se inserta elemento en una posición específica de la lista
        {
            
            if (position < getTamaño() && primero != NULL) {
                Nodo* newNodo = new Nodo(producto);

                Producto* resultado = encontrarConPosition(position);
                
                newNodo->apuntarSiguiente(buscarPosition);

                if (buscarAtras != NULL) {
                    buscarAtras->apuntarSiguiente(newNodo);
                } else {
                    this->primero = newNodo;
                }
                
                cantidad++;
            } else {
                agregar(producto);
            }
        }

        Producto* remover(int pPosition) {
            Producto* resultado = NULL;

            if (primero != NULL && pPosition<getTamaño()) {
                Nodo* buscar = primero;

                if (pPosition != 0) {
                    resultado = encontrarConPosition(pPosition);

                    buscarAtras->apuntarSiguiente(buscarPosition->getSiguiente());

                    if (buscarPosition == ultimo) {
                        ultimo = buscarAtras;
                    }
                    buscarPosition->apuntarSiguiente(NULL);
                } else {
                    primero = primero->getSiguiente();
                    buscar->apuntarSiguiente(NULL);
                    resultado = buscar->getDatos();
                }
                cantidad--;
            }
            return resultado;
        };

        void imprimir() //Se imprime la lista
        {
            Nodo* buscar = primero;

            while (buscar != NULL) {

                cout << buscar->getDatos()->getNombre() << endl;
                buscar = buscar->getSiguiente();
            }
        }
};

/* ¿Qué es una lista?

Las zonas de almacenamiento son una lista
Los pedidos son una lista

*/