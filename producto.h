/*
    Nombre: Carmen Hidalgo Paz y Andrés Hernández Avedaño
    Fecha: 17/9/23
    Descripción: Clase de los productos
*/

#include <iostream>

using namespace std;

class Producto {
    private:
        string nombre;
        int peso;
        int precio;

    public:
        Producto(string pNombre, int pPeso, int pPrecio)
        {
            this->nombre = pNombre;
            this->peso = pPeso;
            this->precio = pPrecio;
        }

        string getNombre() //Retorna el nombre del producto
        {
            return nombre;
        }

        int getPeso() //Retorna el peso del producto
        {
            return peso;
        }
        int getPrecio() //Retorna el precio del producto
        {
            return precio;
        }
};