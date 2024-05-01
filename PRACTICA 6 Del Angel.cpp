#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    // Lee tres enteros distintos
    cout << "Ingrese tres enteros distintos: ";
    cin >> A >> B >> C;

    // Ordena los números de mayor a menor
    if (A > B) {
        if (A > C) {
            if (B > C) {
                // Caso: A > B > C
                cout << A << ", " << B << ", " << C << endl;
            } else {
                // Caso: A > C > B
                cout << A << ", " << C << ", " << B << endl;
            }
        } else {
            // Caso: C > A > B
            cout << C << ", " << A << ", " << B << endl;
        }
    } else {
        if (B > C) {
            if (A > C) {
                // Caso: B > A > C
                cout << B << ", " << A << ", " << C << endl;
            } else {
                // Caso: B > C > A
                cout << B << ", " << C << ", " << A << endl;
            }
        } else {
            // Caso: C > B > A
            cout << C << ", " << B << ", " << A << endl;
        }
    }

    return 0;
}
