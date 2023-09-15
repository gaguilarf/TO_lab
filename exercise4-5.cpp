# include <iostream>

using namespace std;
class Articulo : public error_code {
public:
    int codigo, cantidad, precio;
    string descripcion;
    Articulo(){
    }
    Articulo(int cod, int cant, int prec, string desc){
        codigo = cod;
        cantidad = cant;
        precio = prec;
        descripcion = desc;
    }
    void setCodigo (int cod){
        codigo = cod;
    }
    void setCantidad (int cant){
        cantidad = cant;
    }
    void setPrecio (int prec){
        precio = prec;
    }
    void setDescripcion (string des){
        descripcion = des;
    }
    double getCodigo(){
        return codigo;
    }
    double getCantidad(){
        return cantidad;
    }
    double getPrecio(){
        return precio;
    }
    string getDescripcion(){
        return descripcion;
    }
    int valorTotal(){
        return precio*cantidad;
    }
    void retirarStock(int n){
        cantidad = cantidad - n;
    }
    void anadirStock(int n){
        cantidad = cantidad + n;
    }
    void toString(){
        cout<<"Codigo: "<<codigo<<" Descripcion: "<<descripcion<<"\tCantidad:"<<cantidad
            <<"\tPrecio: "<<precio<<endl;
    }
};

        int main()
            {
                Articulo articulos[5];
                articulos[0]= Articulo(1,10,10,"Alicate");
                articulos[1]= Articulo(2,9,18,"Zizaya");
                articulos[2]= Articulo(3,2,40,"Cemento");
                articulos[3]= Articulo(4,5,5,"Clavos x ciento");
                articulos[4]= Articulo(5,9,8,"yeso x 100g");

                size_t n = sizeof(articulos)/sizeof(articulos[0]);

                // recorrer los elementos de la array
                for (size_t i = 0; i < n; i++) {
                    articulos[i].toString();
                }

                return 0;

            }
