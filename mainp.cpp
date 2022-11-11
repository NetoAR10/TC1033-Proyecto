#include <iostream>
using namespace std;

#include <string>

#include "Transaccion.h"
#include "Cuenta.h"
#include "Categoria.h"

int main() {
    Transaccion trans1("trans1", 123.45, "10/11/2022");
    trans1.imprimeDatos();

    Cuenta Bancomer("Bancomer", "debito", "pesos", 1000, 200);
    Bancomer.imprimeDatos();

    Categoria juegos("CSGO", 500, -200);
    juegos.imprimeDatos();

    return 0;
}