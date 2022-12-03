#include <iostream>
using namespace std;

#include <string>

#include "Transaccion.h"
#include "Cuenta.h"
#include "Categoria.h"
#include "Ingreso.h"
#include "Egreso.h"

// Este programa es un menu para separar tus transacciones ya sea en una cuenta (como bancomer, banamex, scotiabank, etc)
// o para separar las transacciones en categorias. Primero hay que crear ya sea una cuenta o una categoria, luego se tiene
// que ingresar una transaccion, si es un gasto se tiene que escribir con "-". Luego se puede ver el historial de transacciones
// en la opcion 3 para una cuenta y en la opcion 6 para una categoria.

void menu() //menu 
{
    cout << "\nMenu: \n";
    cout << "1) Crear Cuenta \n";
    cout << "2) Ingresar Transaccion a Cuenta \n";
    cout << "3) Mostrar Transacciones de Cuenta \n";
    cout << "4) Crear Categoria \n";
    cout << "5) Ingresar Transaccion a Categoria \n";
    cout << "6) Mostrar Transaccion de Categoria \n";
    cout << "7) Salir \n";
}

int main()
{

    int opcion = 0;

    Cuenta cuentaActual;        //inicializador de objetos con valores default
    Categoria categoriaActual;

    while (opcion < 8 && opcion > -1)
    {
        menu();

        //inicializador de variables
        string temp_nombre = "";
        string temp_tipo = "";
        string temp_fecha = "";
        string temp_moneda = "";
        float temp_balance = 0.0;
        float temp_monto = 0;

        cin >> opcion;
        switch (opcion)
        {
        case 1: //creacion de cuenta con los datos que ingrese el usuario
            cout << "Para crear cuenta ingrese nombre: " << endl;
            cin >> temp_nombre;
            cout << "Escribe si es debito y credito" << endl;
            cin >> temp_tipo;
            cout << "Escribe el tipo de moneda" << endl;
            cin >> temp_moneda;
            cout << "Escribe el balance inicial" << endl;
            cin >> temp_balance;

            cuentaActual.setNombre(temp_nombre);
            cuentaActual.setTipo(temp_tipo);
            cuentaActual.setMoneda(temp_moneda);
            cuentaActual.setBalance(temp_balance);

            break;
        case 2: //ingreso de transaccion 
            cout << "Escribe el nombre: ";
            cin >> temp_nombre;
            cout << "Escribe fecha: ";
            cin >> temp_fecha;
            cout << "Escribe el monto: ";
            cin >> temp_monto;
            if (temp_monto > 0) //si la cantidad es positiva entonces es ingreso, si es negativa es egreso
            {
                Ingreso temp_ingreso(temp_nombre, temp_fecha, temp_monto);
                cuentaActual.setTransaccion(&temp_ingreso); //añade el ingreso a la cuenta
            }
            else
            {
                Egreso temp_egreso(temp_nombre, temp_fecha, temp_monto);
                cuentaActual.setTransaccion(&temp_egreso); //añade el egreso a la cuenta
            }

            break;
        case 3:
            cuentaActual.imprimeDatos(); //imprime los atributos de la cuenta y su historial de transacciones

            break;
        case 4: //creacion de categoria con los datos que ingrese el usuario
            cout << "Para crear categoria ingrese nombre: " << endl;
            cin >> temp_nombre;
            cout << "Escribe el balance inicial" << endl;
            cin >> temp_balance;

            categoriaActual.setNombre(temp_nombre);
            categoriaActual.setBalance(temp_balance);

            break;
        case 5: //ingreso de transaccion
            cout << "Escribe el nombre: ";
            cin >> temp_nombre;
            cout << "Escribe fecha: ";
            cin >> temp_fecha;
            cout << "Escribe el monto: ";
            cin >> temp_monto;
            if (temp_monto > 0) //si la cantidad es positiva entonces es ingreso, si es negativa es egreso
            {
                Ingreso temp_ingreso(temp_nombre, temp_fecha, temp_monto);
                categoriaActual.setTransaccion(&temp_ingreso); //añade ingreso a categoria
            }
            else
            {
                Egreso temp_egreso(temp_nombre, temp_fecha, temp_monto);
                categoriaActual.setTransaccion(&temp_egreso); //añade egreso a categoria
            }

            break;
        case 6:
            categoriaActual.imprimeDatos(); //imprime los atributos de la categoria y su historial de transacciones

            break;
        case 7: //termina el programa

            return 0;
        }
    }

    return 0;
}