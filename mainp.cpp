#include <iostream>
using namespace std;

#include <string>

#include "Transaccion.h"
#include "Cuenta.h"
#include "Categoria.h"
#include "Ingreso.h"
#include "Egreso.h"

// La herencia se muestra con el egreso y el ingreso
// La agregación esta en la opción 2
// Las demas opciones aún no funcionan

void menu()
{
    cout << "Menu: \n";
    cout << "1) Crear Cuenta \n";
    cout << "2) Ingresar Transacción \n";
    cout << "3) ingresar Categoría \n";
    cout << "4) Mostrar Transacción \n";
    cout << "5) Mostrar Categoria \n";
    cout << "6) Salir \n";
}

int main()
{

    int opcion = 0;

    Transaccion trans1("trans1", "10/11/2022", 1234.5);
    // trans1.imprimeDatos();

    Cuenta bancomer("Bancomer", "debito", "pesos", 1000, trans1);
    // bancomer.imprimeDatos();

    while (opcion < 7 && opcion > -1)
    {
        menu();
        string temp_nombre = "";
        string temp_fecha = "";
        float temp_monto = 0;
        cin >> opcion;
        switch (opcion)
        {
        case 1:

            break;
        case 2:
            cout << "Escribe el nombre: ";
            cin >> temp_nombre;
            cout << "Escribe fecha: ";
            cin >> temp_fecha;
            cout << "Escribe el monto: ";
            cin >> temp_monto;
            if (temp_monto > 0)
            {
                Ingreso temp_ingreso(temp_nombre, temp_fecha, temp_monto);
                bancomer.setTransaccion(temp_ingreso);
            }
            else
            {
                Egreso temp_egreso(temp_nombre, temp_fecha, temp_monto);
                bancomer.setTransaccion(temp_egreso);
            }

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            return 0;
        }
    }

    Categoria juegos("CSGO", 500, trans1);
    juegos.imprimeDatos();

    return 0;
}