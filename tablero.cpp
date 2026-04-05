#include <iostream>
using namespace std;

int main() {

    int A[4][4];
    int B[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    int S[4][4];

    // Llenar matriz A desde teclado
    cout << "Ingrese los 16 elementos de la matriz A (4x4):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Imprimir matriz A
    cout << "\nMatriz A:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Imprimir matriz B
    cout << "\nMatriz B:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Sumar A + B y guardar en S
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprimir resultado
    cout << "\nMatriz resultado (A + B):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
