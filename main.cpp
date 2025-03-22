#include <iostream>

using namespace std;


void sumar(double a, double b) {
    cout << "El resultado de la suma es: " << (a + b) << endl;
}

void restar(double a, double b) {
    cout << "El resultado de la resta es: " << (a - b) << endl;
}

void multiplicar(double a, double b) {
    cout << "El resultado de la multiplicación es: " << (a * b) << endl;
}

void dividir(double a, double b) {
    if (b != 0) {
        cout << "El resultado de la división es: " << (a / b) << endl;
    } else {
        cout << "Error no se puede dividir entre cero." << endl;
    }
}

void potencia(double base, int exponente) {
    double resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    cout << "El resultado de la potencia es: " << resultado << endl;
}

void raizCuadrada(double a) {
    if (a < 0) {
        cout << "Error no se puede calcular la raíz cuadrada de un número negativo." << endl;
        return;
    }
    double resultado = a;
    double temp;
    do {
        temp = resultado;
        resultado = 0.5 * (temp + (a / temp));
    } while (temp != resultado);
    cout << "La raíz cuadrada es: " << resultado << endl;
}

void factorial(int n) {
    if (n < 0) {
        cout << "Error no se puede calcular el factorial de un número negativo." << endl;
        return;
    }
    long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    cout << "El factorial de " << n << " es: " << resultado << endl;
}

int main() {
    int opcion;
    double num1, num2;

    cout << "Bienvenido a la calculadora básica en C++" << endl;

    do {
        cout << "\nSeleccione una opción:" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Raíz Cuadrada" << endl;
        cout << "7. Factorial" << endl;
        cout << "8. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                sumar(num1, num2);
                break;
            case 2:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                restar(num1, num2);
                break;
            case 3:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                multiplicar(num1, num2);
                break;
            case 4:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                dividir(num1, num2);
                break;
            case 5:
                int exponente;
                cout << "Ingrese la base y el exponente: ";
                cin >> num1 >> exponente;
                potencia(num1, exponente);
                break;
            case 6:
                cout << "Ingrese un número: ";
                cin >> num1;
                raizCuadrada(num1);
                break;
            case 7:
                int n;
                cout << "Ingrese un número entero: ";
                cin >> n;
                factorial(n);
                break;
            case 8:
                cout << "Saliendo del programa. ¡Gracias por usar la calculadora!" << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 8);

    return 0;
}