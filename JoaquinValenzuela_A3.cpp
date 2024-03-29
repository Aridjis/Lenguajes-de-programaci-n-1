#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char obtenerPrimeraVocalInterna(const string& str) {
    for (size_t i = 1; i < str.length(); i++) {
        char c = toupper(str[i]);  // Convertir a mayúsculas para simplificar la comparación
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return c;
    }
    return 'X';
}

string calcularRFC(const string& nombre, const string& apellidoPaterno, const string& apellidoMaterno, const string& fechaNacimiento) {
    string rfc;
    
    char letraInicial = toupper(apellidoPaterno[0]);  // Convertir a mayúsculas para el RFC
    char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? toupper(apellidoMaterno[0]) : 'X';  // Convertir a mayúsculas para el RFC
    
    char inicialNombre = toupper(nombre[0]);  // Convertir a mayúsculas para el RFC
    
    string anio = fechaNacimiento.substr(2, 2);
    string mes = fechaNacimiento.substr(5, 2);
    string dia = fechaNacimiento.substr(8, 2);
    
    rfc = letraInicial;
    rfc += primeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    return rfc;
}

int main() {
    string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    
    cout << "Ingresa tu nombre(s): ";
    getline(cin, nombre);
    
    cout << "Ingresa tu apellido paterno: ";
    getline(cin, apellidoPaterno);
    
    cout << "Ingresa tu apellido materno (si no tiene, presione <Enter>): ";
    getline(cin, apellidoMaterno);
    
    cout << "Ingresa tu fecha de nacimiento (AAAA/MM/DD): ";
    getline(cin, fechaNacimiento);
    
    string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
    cout << "RFC: " << rfc << endl;

    return 0;
}

