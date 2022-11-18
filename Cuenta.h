using namespace std;

#include <iostream>

#include <string>

#include "Transaccion.h"

class Cuenta {
    private:
    string nombre;
    string tipo;
    string moneda;
    float balance;
    Transaccion transaccion;

    public: 

    Cuenta() {
        nombre = "trans1";
        tipo = "debito";
        moneda = "pesos";
        balance = 0.0;
        transaccion.setMonto(0.0);
    }

    Cuenta(string nom, string tip, string mon, float bal, Transaccion trans) {
        nombre = nom;
        tipo = tip;
        moneda = mon;
        balance = bal;
        transaccion = trans;
    }

    string getNombre() {
        return nombre;
    }

    string getTipo() {
        return tipo;
    }

    string getMoneda() {
        return moneda;
    }

    float getBalance() {
        return balance;
    }

    Transaccion getTransacciones() {
        return transaccion;
    }

    void setNombre(string nom) {
        nombre = nom;
    }

    void setTipo(string tip) {
        tipo = tip;
    }

    void setMoneda(string mon) {
        moneda = mon;
    }

    void setBalance(float bal) {
        balance = bal;
    }

    void setTransaccion(Transaccion trans) {
        transaccion = trans;
    }

    void imprimeDatos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Tipo: " << tipo << endl;
            cout << "Moneda: " << moneda << endl;
            cout << "Balance: " << balance << endl;
            cout << "Transaccion: " << transaccion.getMonto() << endl;
        }
};