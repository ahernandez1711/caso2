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
        Producto(string pNombre, int pPeso, int pPrecio);
        string getNombre();
        int getPeso();
        int getPrecio();
};