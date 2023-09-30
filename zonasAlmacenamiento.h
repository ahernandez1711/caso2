#include <iostream>

using namespace std;

class zonasAlmacenamiento {
    private:
        int numZona;

    public:
        zonasAlmacenamiento(int zona) //Se crea una zona para cada tipo de producto
        {

        }

        int getZona() //Retorna la zona
        {
            return numZona;
        }
};