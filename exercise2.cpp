#include <iostream>
#include <iomanip>

int main() {
    // Definir las localidades y casos de COVID-19
    std::string localidades[] = {"Achoma", "Cabanaconde", "Callali"};
    int casosCovid[] = {1245230, 1212, 321};

    // Imprimir encabezado
    std::cout << std::setw(20) << "UBICACIÓN" << std::setw(10) << "CASOS COVID" << std::endl;

    // Imprimir datos de las localidades
    for (int i = 0; i < 3; i++) {
        std::cout << std::setw(20) << localidades[i] << std::setw(10) << casosCovid[i] << std::endl;
    }

    return 0;
}
