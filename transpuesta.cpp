#include <iostream>
using namespace std;

int main() {

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int transpuesta[3][3];

    // Calcular transpuesta: fila i, columna j -> fila j, columna i
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }

    // Imprimir matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Imprimir transpuesta
    cout << "\nMatriz transpuesta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
