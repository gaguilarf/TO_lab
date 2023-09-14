#include <iostream>
using namespace std;

int main() {
    int Z,M;
    cout << "Ingrese el valor de Z: ";
    cin >> Z;
    cout << "Ingrese el valor de M: ";
    cin >> M;
    if(Z >= M) {
        cout << "El valor de z debe ser menor que m." << std::endl;
        return 1;
    }
    cout << "Años multiplos de 5 y 7 entre " << Z << " y " << M << ";" << std::endl;
    for (int year = Z; year <= M; year++) {
        if (year % 5 == 0 && year % 7 == 0) {
            cout << year << " ";
        }
    }
    return 0;
}
