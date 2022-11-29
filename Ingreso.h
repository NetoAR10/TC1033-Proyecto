using namespace std;

#include <iostream>

#include <string>

class Ingreso : public Transaccion
{
public:
    Ingreso()
    {
    }

    Ingreso(string nom, string fech, float mont) : Transaccion(nom, fech, mont)
    {
    }

    bool checarPositivo()
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
};