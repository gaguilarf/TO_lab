#include <iostream>

using namespace std;
class Articulo{
    int numero;
    string articulo;
    int cantidad;
    string descripcion;

    Articulo(int numero, const string &articulo, int cantidad, const string &descripcion) : numero(numero),
                                                                                            articulo(articulo),
                                                                                            cantidad(cantidad),
                                                                                            descripcion(descripcion) {}

    int getNumero() const {
        return numero;
    }

    void setNumero(int numero) {
        Ferreteria::numero = numero;
    }

    const string &getArticulo() const {
        return articulo;
    }

    void setArticulo(const string &articulo) {
        Ferreteria::articulo = articulo;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int cantidad) {
        Ferreteria::cantidad = cantidad;
    }

    const string &getDescripcion() const {
        return descripcion;
    }

    void setDescripcion(const string &descripcion) {
        Ferreteria::descripcion = descripcion;
    }


};


int main() {
    // Write C++ code here
    Articulo antares;
    antares.setNumero(1);
    antares.setArticulo("alicate");
    antares.setCantidad(5);
    antares.setDescripcion("presionar objetos");

    cout<<"Codigo: "<<antares.getNumero()<<"\n";
    cout<<"Nombre: "<<antares.getArticulo()<<"\n";
    cout<<"Cantidad: "<<antares.getCantidad()<<"\n";
    cout<<"Descripcion: "<<antares.getDescripcion()<<"\n";

    return 0;
}