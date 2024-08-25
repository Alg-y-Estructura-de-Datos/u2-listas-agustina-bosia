#include <iostream>
#include "Lista/Lista.h"
using namespace std;
/*
 Utiliza la clase ListaDoble para gestionar una lista de estudiantes, donde cada estudiante
tiene un nombre (cadena de caracteres) y una edad (entero). Implementa las siguientes
funcionalidades:

1. Agregar Estudiantes:

○ Usa los métodos de ListaDoble para agregar varios estudiantes a la lista.
Debes insertar al menos cinco estudiantes con nombres y edades diferentes.

2. Mostrar Estudiantes:

○ Implementa una función que recorra la lista y muestre todos los estudiantes en
orden. Utiliza el método imprimir() de ListaDoble.

3. Buscar un Estudiante por Nombre:

○ Implementa una función que busque un estudiante por su nombre. Utiliza el
método getDato(int pos) para acceder a los datos de los nodos y busca al
estudiante en la lista.

4. Eliminar un Estudiante por Nombre:

○ Implementa una función que elimine un estudiante por su nombre. Utiliza los
métodos getDato(int pos) y remover(int pos) para encontrar y
eliminar al estudiante de la lista.

5. Contar Estudiantes:

○ Usa el método getTamanio() para Estuar el número de estudiantes en la lista
y muestra el resultado
 */

int main(){
    int op;
    bool c=1;

    cout<<"Ingrese una opción: \n 1- Agregar Estuactos \n 2- Mostrar Estuactos"<<endl;
    cout<<" 3- Buscar un Estuacto por Nombre \n 4- Eliminar un Estuacto por nombre \n 5- Salir\n";
    cin>>op;

    while (c)
    {
        switch (op){
        case 1:
            addEstu();
            break;
        case 2:
            mostrarEstu();
            break;
        case 3:
            searchEstu();
            break;
        case 4:
            eliminarEstu();
            break;
        case 5:
            EstuEstu();
            break;
        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    }
    return 0;
}
void addEstu(){
    
}

void mostrarEstu(){

}

void searchEstu(){

}

void eliminarEstu(){

}

int EstuEstu(){
    
}
