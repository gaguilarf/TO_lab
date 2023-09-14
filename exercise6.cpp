//
// Created by notch986 on 14/09/23.
//
#include <iostream>
using namespace std;
class Rectangulo {
private:
    double longitud;
    double ancho;

public:
    // Constructor predeterminado
    Rectangulo() : longitud(1.0), ancho(1.0) {}

    // Funciones set (establecer) para longitud y ancho
    void setLongitud(double nuevaLongitud) {
        if (nuevaLongitud > 0.0 && nuevaLongitud < 20.0) {
            longitud = nuevaLongitud;
        } else {
            cout << "Valor de longitud fuera de rango. Se estableció en 0." << std::endl;
            longitud = 0.0;
        }
    }
    void setAncho(double nuevoAncho) {
        if (nuevoAncho > 0.0 && nuevoAncho < 20.0) {
            ancho = nuevoAncho;
        } else {
            cout << "Valor de ancho fuera de rango. Se estableció en 0." << std::endl;
            ancho = 0.0;
        }
    }
    // Funciones get (obtener) para longitud y ancho
    double getLongitud() const {
        return longitud;
    }
    double getAncho() const {
        return ancho;
    }
    // Función para calcular el perímetro
    double calcularPerimetro() const {
        return 2 * (longitud + ancho);
    }
    // Función para calcular el área
    double calcularArea() const {
        return longitud * ancho;
    }
};

int main() {
    Rectangulo miRectangulo;

    // Establecer valores para longitud y ancho
    miRectangulo.setLongitud(21.0);
    miRectangulo.setAncho(23.2);

    // Obtener valores de longitud y ancho
    double longitud = miRectangulo.getLongitud();
    double ancho = miRectangulo.getAncho();

    // Calcular y mostrar el perímetro y el área
    cout << "Creamos un rectangulo de " << longitud << " de alto por " << ancho << " de ancho" << std::endl;
    cout << "La altura es: " << longitud << std::endl;
    cout << "El ancho es: " << ancho << std::endl;
    cout << "El Perímetro es: " << miRectangulo.calcularPerimetro() << std::endl;
    cout << "El Área es: " << miRectangulo.calcularArea() << std::endl;

    return 0;

}