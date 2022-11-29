using namespace std;

#include <iostream>

#include <string>

class Egreso : public Transaccion
{
public:
    Egreso()
    {
    }

    Egreso(string nom, string fech, float mont) : Transaccion(nom, fech, mont)
    {
    }

    bool checarNegativo()
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
};
