using namespace std;
#include <iostream>
#include <string>

class Transaccion
{
private:
    string nombre;
    string fecha;
    float monto;

public:
    //constructores
    Transaccion()
    {
        nombre = "trans1";
        fecha = "01/01/2000";
    }

    Transaccion(string nom, string fech, float mont)
    {
        nombre = nom;
        fecha = fech;
        monto = mont;
    }

    //getters
    string getNombre()
    {
        return nombre;
    }

    string getFecha()
    {
        return fecha;
    }

    float getMonto()
    {
        return monto;
    }

    //setters
    void setNombre(string nom)
    {
        nombre = nom;
    }

    void setFecha(string fech)
    {
        fecha = fech;
    }

    float setMonto(float mont)
    {
        monto = mont;
    }

    virtual void imprimeDatos() //metodo virtual para que las clases hijas lo implementen a su gusto
    {
        cout << "Imprimiendo transaccion" << endl;
    }
};