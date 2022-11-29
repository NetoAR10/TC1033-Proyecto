using namespace std;

#include <iostream>

#include <string>

class Cuenta
{
private:
    string nombre;
    string tipo;
    string moneda;
    float balance;
    Transaccion transacciones[10];

public:
    Cuenta()
    {
        nombre = "trans1";
        tipo = "debito";
        moneda = "pesos";
        balance = 0.0;
    }

    Cuenta(string nom, string tip, string mon, float bal)
    {
        nombre = nom;
        tipo = tip;
        moneda = mon;
        balance = bal;
    }

    string getNombre()
    {
        return nombre;
    }

    string getTipo()
    {
        return tipo;
    }

    string getMoneda()
    {
        return moneda;
    }

    float getBalance()
    {
        return balance;
    }

    Transaccion getTransaccion(int posicion)
    {
        return transacciones[posicion];
    }

    void setNombre(string nom)
    {
        nombre = nom;
    }

    void setTipo(string tip)
    {
        tipo = tip;
    }

    void setMoneda(string mon)
    {
        moneda = mon;
    }

    void setBalance(float bal)
    {
        balance = bal;
    }

    void setTransaccion(Transaccion trans, int posicion)
    {
        transacciones[posicion] = trans;
    }

    void imprimeDatos()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Moneda: " << moneda << endl;
        cout << "Balance: " << balance << endl;
    }
};