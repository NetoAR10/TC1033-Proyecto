using namespace std;

#include <iostream>

#include <string>

class Ingreso : public Transaccion
{
public:
    //constructores
    Ingreso()
    {
    }

    Ingreso(string nom, string fech, float mont) : Transaccion(nom, fech, mont)
    {
    }

    bool checarPositivo() //checa si la cantidad es positiva
    {
        if (getMonto() > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void imprimeDatos() //si una cantidad metida por el usuario es positiva entonces la imprime como ingreso 
    {
        cout << "Ingreso -> " << getMonto() << endl;
    }
};