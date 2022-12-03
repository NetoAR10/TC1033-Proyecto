using namespace std;

#include <iostream>
#include <string>
#include <vector>

class Cuenta
{
private:
    string nombre;
    string tipo;
    string moneda;
    float balance;
    vector<Transaccion *> transacciones;

public:
    //constructor
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

    //getters
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

    vector<Transaccion *> getTransaccion()
    {
        return transacciones;
    }

    //setters
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

    void setTransaccion(Transaccion *trans) //funcion para sumar o restar el balance establecido de la cuenta
    {
        float balance_actual = getBalance(); //consigue el balance antes del cambio
        balance_actual = balance_actual + trans->getMonto(); //suma o resta del monto pedido por el usuario
        setBalance(balance_actual); //settea el balance actual
        transacciones.push_back(trans); //agrega la transaccion al historial
    }
    
    void imprimeDatos() //imprime los datos del objeto y todas las transacciones pasadas
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Moneda: " << moneda << endl;
        cout << "Balance: " << balance << endl;
        for (int i = 0; i < transacciones.size(); i++)
        {
            cout << "Transaccion " << i << ": " << endl;
            transacciones[i]->imprimeDatos();
        }
    }
};