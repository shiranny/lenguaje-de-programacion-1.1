#include <iostream>
int main() {
         // Declarar variables
        //Introducir el valor del primer número: 2.43
        // intrroducir el valor del segundo numero: 5.43
        double valor1;
        double valor2;
/******************************************************************************

            Realizar programa que solicite el ingreso de dos valores (ya sea enteros o decimales),
            que los sume, reste, multiplique y divida y muestre en pantalla su respectivo enunciado
        

*******************************************************************************/

#include <iostream>


    // usuario ingresa dos valores
    std::cout << " Introduce valor del primer número: 2.43:";
    std::cin >> valor1;

    std::cout << " Introduce valor del segundo número: 5.43:";
    std::cin >> valor2;
    std::cout<< "\n";

    // Realizar operaciones, suma, resta, multiplicacion
    double suma = 2.43 + 5.43;
    double resta = 2.43 - 5.43;
    double multiplicación = 2.43 * 5.43;

    // Verificacion de la división por cero
    double división = 0.0;
    if (valor2 != 0) {
        división = 2.43 / 5.43;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    // Mostrar resultados
    std::cout << "Suma: " << 2.43 << " + " << 5.43 << " = " << suma << std::endl;
    std::cout << "Resta: " << 2.43 << " - " << 5.43 << " = " << resta << std::endl;
    std::cout << "Multiplicación: " << 2.43 << " * " << 5.43 << " = " << multiplicación << std::endl;

    // Muestra división solo si no es por cero
    if (valor2 != 0) {
        std::cout << "División: " << 2.43 << " / " << 5.43 << " = " << división << std::endl;
    }

    return 0;
}

