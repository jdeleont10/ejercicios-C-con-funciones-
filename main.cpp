#include <iostream>
#include "fstream"

using namespace std;

void copiarArchivo(string directorioOrigen, string directorioDestino);
void crearTabla(string directorio);
string directorioOrigen;
string directorioDestino;
string directorioTabla;

int main() {
    directorioOrigen = "C:/Users/tobar/OneDrive/Escritorio/Ejercicios con Archivos En C/origen.txt";
    directorioDestino = "C:/Users/tobar/OneDrive/Escritorio/Ejercicios con Archivos En C/destino.txt";
    directorioTabla = "C:/Users/tobar/OneDrive/Escritorio/Ejercicios con Archivos En C/tabla_del_8.txt.txt";

    copiarArchivo(directorioOrigen, directorioDestino);
    crearTabla(directorioTabla);

    return 0;
}

void copiarArchivo(string directorioOrigen, string directorioDestino) {
    string linea;
    ifstream origen;
    ofstream destino;

    origen.open(directorioOrigen);
    if(!origen.is_open()) {
        cout << "Error al abrir archivo origen" << endl;
        return;
    }

    destino.open(directorioDestino);
    if(!destino.is_open()) {
        cout << "Error al abrir archivo destino" << endl;
        origen.close();
        return;
    }

    cout << "Copiando archivo..." << endl;
    while(getline(origen, linea)) {
        destino << linea << endl;
        cout << "Copiando: " << linea << endl;
    }

    cout << "Archivo copiado exitosamente" << endl;

    origen.close();
    destino.close();
}

void crearTabla(string directorio) {
    ofstream archivo;
    archivo.open(directorio);

    if(!archivo.is_open()) {
        cout << "Error al crear el archivo" << endl;
        return;
    }

    cout << "\nCreando tabla del 8..." << endl;
    archivo << "TABLA DE MULTIPLICAR DEL 8" << endl;
    archivo << "=========================" << endl;

    for(int i = 1; i <= 10; i++) {
        string linea = "8 x " + to_string(i) + " = " + to_string(8 * i);
        archivo << linea << endl;
        cout << "Escribiendo: " << linea << endl;
    }

    archivo.close();
    cout << "\nTabla del 8 creada exitosamente!" << endl;
}