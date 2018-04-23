/*
Programa_55

Uso de estructuras o registros

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 9 de mayo de 2015
*/

#include <iostream>
#include <windows.h>

using namespace std;

struct computadora
{
    char marca[25], modelo[15];
    int existencia;
    float precio, descuento;
}pc;

void capturar ()
{
    cout<<"\n\tMarca:                       ";
    cin>>pc.marca;
    cout<<"\n\tModelo:                      ";
    cin>>pc.modelo;
    cout<<"\n\tUnidades en existencia:      ";
    cin>>pc.existencia;
    cout<<"\n\tPrecio:                      ";
    cin>>pc.precio;
    pc.descuento=pc.precio*0.15;
    cout<<"\n\n\t\t";
    system ("pause");

}

void mostrar()
{
    cout<<"\n\tEl descuento de la computadora "<<pc.marca;
    cout<<" modelo "<<pc.modelo<<" es de "<<pc.descuento<<"\n\n\t";
    system ("pause");
}

int main()
{
int opc;
do{
    system ("cls");
    cout<<"\n\tEstructuras o registros\n";
    cout<<"\n\t1.-Capturar \n\t2.-Mostrar \n\t3.-Salir \n";
    cout<<"\n\tElige una opcion --> ";
    cin>>opc;

    if(opc==1){
        capturar();
    }
    if(opc==2){
        mostrar();
    }
    if(opc==3){
        cout<<"\n\n\tHa elegido salir... \n\n\t\t";
    }
}while(opc!=3);

cout<<"\n\n\t\t";
system ("pause");

return 0;
}
