#include <iostream>
using namespace std;

#include <string>

#include "Transaccion.h"

class Categoria {
    private:
    string nombre;
    float balance;
    Transaccion transaccion;

    public: 
    Categoria() {
        nombre = "cat1";
        balance = 0.0;
        transaccion.setMonto(0.0);
    }

    Categoria(string nom, float bal, float trans) {
        nombre = nom;
        balance = bal;
        transaccion = trans;
    }

    string getNombre() {
        return nombre;
    }

    float getBalance() {
        return balance;
    }

    Transaccion getTransaccion() {
        return transaccion;
    }

    void setNombre(string nom) {
        nombre = nom;
    }

    void setBalance(float bal) {
        balance = bal;
    }

    void setTransaccion(Transaccion trans) {
        transaccion = trans;
    }

    void imprimeDatos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Balance: " << balance << endl;
            cout << "Transaccion: " << transaccion.getMonto() << endl;
        }

};