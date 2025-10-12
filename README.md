# Proyecto-Marat-n-de-Algoritmos-C-
Miselania Proyecto Maratón de Algoritmo C++
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> // para sort

using namespace std;

int main() {
    vector<int> numeros;
    ifstream entrada("numeros.txt"); // archivo de entrada
    ofstream salida("ordenados.txt"); // archivo de salida

    if (!entrada) {
        cout << "No se pudo abrir el archivo 'numeros.txt'." << endl;
        return 1;
    }

    int num;
    // Leer todos los números del archivo
    while (entrada >> num) {
        numeros.push_back(num);
    }

    // Ordenar de menor a mayor
    sort(numeros.begin(), numeros.end());

    // Guardar los números ordenados en el archivo de salida
    for (int n : numeros) {
        salida << n << endl;
    }

    cout << "Los numeros han sido ordenados y guardados en 'ordenados.txt'." << endl;

    entrada.close();
    salida.close();

    return 0;
}
