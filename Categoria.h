#include <iostream>
using namespace std;

#include <string>

class Categoria {
    private:
    string nombre;
    float balance;
    float transaccion;

    public: 
    Categoria() {
        nombre = "cat1";
        balance = 0.0;
        transaccion = 0;
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

    float getTransaccion() {
        return transaccion;
    }

    void setNombre(string nom) {
        nombre = nom;
    }

    void setBalance(float bal) {
        balance = bal;
    }

    void setTransaccion(float trans) {
        transaccion = trans;
    }

    void imprimeDatos() {
            cout << "Nombre: " << nombre << endl;
            cout << "Balance: " << balance << endl;
            cout << "Transaccion: " << transaccion << endl;
        }

};