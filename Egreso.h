using namespace std;

#include <iostream>

#include <string>

class Egreso : public Transaccion
{
public:
    //constructores
    Egreso()
    {
    }

    Egreso(string nom, string fech, float mont) : Transaccion(nom, fech, mont)
    {
    }

    bool checarNegativo() //checa si la cantidad es negativa
    {
        if (getMonto() < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void imprimeDatos() //si una cantidad metida por el usuario es negativa entonces la imprime como egreso
    {
        cout << "Egreso -> " << getMonto() << endl;
    }
};
