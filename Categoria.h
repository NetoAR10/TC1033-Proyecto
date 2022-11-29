#include <iostream>
using namespace std;

#include <string>

class Categoria
{
private:
    string nombre;
    float balance;
    Transaccion transacciones[10];

public:
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

    string getNombre()
    {
        return nombre;
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
        cout << "Balance: " << balance << endl;
    }
};