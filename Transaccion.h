#include <iostream>
using namespace std;

#include <string>

class Transaccion {
    private:
    string nombre;
    float monto;
    string fecha;

    public: 
    Transaccion() {
        nombre = "trans1";
        monto = 0.0;
        fecha = "01/01/2000";
    }

    Transaccion(string nom, float mont, string fech) {
        nombre = nom;
        monto = mont;
        fecha = fech;
    }

    string getNombre() {
        return nombre;
    }

    float getMonto() {
        return monto;
    }

    string getFecha() {
        return fecha;
    }

    void setNombre(string nom) {
        nombre = nom;
    }

    void setMonto(float mont) {
        monto = mont;
    }

    void setFecha(string fech) {
        fecha = fech;
    }

    void imprimeDatos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Monto: " << monto << endl;
            cout << "Fecha: " << fecha << endl;
        }
};