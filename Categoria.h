#include <iostream>
using namespace std;

#include <string>
#include <vector>

class Categoria
{
private:
    string nombre;
    float balance;
    vector<Transaccion *> transacciones;

public:
    //constructores
    Categoria()
    {
        nombre = "cat1";
        balance = 0.0;
    }

    Categoria(string nom, float bal, Transaccion trans)
    {
        nombre = nom;
        balance = bal;
    }

    //getters
    string getNombre()
    {
        return nombre;
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

    void setBalance(float bal)
    {
        balance = bal;
    }

    void setTransaccion(Transaccion *trans) //funcion para sumar o restar el balance establecido de la categoria
    {
        float balance_actual = getBalance(); //consigue el balance antes del cambio
        balance_actual = balance_actual + trans->getMonto(); //suma o resta del monto pedido por el usuario
        setBalance(balance_actual); //settea el balance actual
        transacciones.push_back(trans); //agrega la transaccion al historial
    }

    void imprimeDatos() //imprime los datos del objeto y todas las transacciones pasadas
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Balance: " << balance << endl;

        for (int i = 0; i < transacciones.size(); i++)
        {
            cout << "Transaccion " << i << ": ";
            transacciones[i]->imprimeDatos();
        }
    }
};