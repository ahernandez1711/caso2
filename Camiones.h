#include "lista.h"
#include "producto.h"
#include "pila.h"
#include "cola.h"


#include <iostream>



class camion
{
    private:
        Pila* pilaProducto; 

    public:
        camion()
        {
            pilaProducto = new Pila();
        }
}
//la clase de camion es simple y solamente ocupa tener una pila dentro de cada camion

class procesoCamiones
{
    private:
        int min;
        int max;
        Cola* procesoCola;
    public:
        procesoCamiones(int min, int max) //el input sera del json eventualmente para definir los rangos y no definirlos por .h como minimo y maximo del intervalo de tiempo
            {
                this->min = pMin;
                this->max =>pMax;
                procesoCola -= new Cola();
            }
        void insertarQueue (camion Camion)
            procesoCola->agregarFinal(Camion);
        void sacarQueue()
            return procesoCola->sacarInicio();   

}

class procesoPedidos
{
    private:
        Lista* listaPedidos;

    public:
        procesoPedidos()
        {
            listaPedidos = new Lista();
        }
        void insertarPedido(Producto* producto)
            listaPedidos ->insertarEnPosition(0,producto)

}
