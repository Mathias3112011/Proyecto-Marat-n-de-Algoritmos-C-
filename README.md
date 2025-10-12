# Proyecto-Marat-n-de-Algoritmos-C-
Miselania Proyecto Maratón de Algoritmo C++
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> // sort, greater

using namespace std;

int main() {
    vector<long long> numeros;            // acepta números grandes
    ifstream entrada("numeros.txt");      
    if (!entrada) {
        cerr << "No se pudo abrir 'numeros.txt'." << endl;
        return 1;
    }

    long long n;
    // lee números separados por espacios o líneas nuevas
    while (entrada >> n) {
        numeros.push_back(n);
    }
    entrada.close();

    if (numeros.empty()) {
        cout << "El archivo 'numeros.txt' está vacío o no contiene números." << endl;
        return 0;
    }

    // Mostrar antes de ordenar
    cout << "Antes (orden en archivo): ";
    for (size_t i = 0; i < numeros.size(); ++i) {
        if (i) cout << ", ";
        cout << numeros[i];
    }
    cout << endl;

    // Ordenar de mayor a menor
    sort(numeros.begin(), numeros.end(), greater<long long>());

    // Mostrar después de ordenar
    cout << "Después (de mayor a menor): ";
    for (size_t i = 0; i < numeros.size(); ++i) {
        if (i) cout << ", ";
        cout << numeros[i];
    }
    cout << endl;

    // Guardar en archivo de salida
    ofstream salida("ordenados.txt");
    if (!salida) {
        cerr << "No se pudo crear 'ordenados.txt'." << endl;
        return 1;
    }
    for (long long v : numeros) {
        salida << v << '\n';
    }
    salida.close();

    cout << "Listo — resultado guardado en 'ordenados.txt'." << endl;
    return 0;
}
