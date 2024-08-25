#include <iostream>
#include "Lista/Lista.h"
using namespace std;

/*

 Utilizando esta estructura, crea un programa que gestione una lista circular
 de contactos. Cada contacto contiene un nombre (cadena de caracteres)
 y un número de teléfono (cadena de caracteres).

Tareas

 1. Agregar Contactos:
○ Usa los métodos de CircList para agregar varios contactos a la lista. Deberás
insertar al menos cinco contactos con nombres y números de teléfono distintos.

2. Mostrar Contactos:
○ Implementa una función que recorra la lista circular y muestre todos los
contactos en orden. Usa el método imprimir() de CircList.

3. Buscar un Contacto por Nombre:
○ Implementa una función que busque un contacto por su nombre. Usa el método
getDato(int pos) para acceder a los datos de los nodos y busca el
contacto en la lista.

4. Eliminar un Contacto por Nombre:
○ Implementa una función que elimine un contacto por su nombre. Deberás usar
los métodos getDato(int pos) y eliminarPorValor(T valor) (supón
que eliminarPorValor está implementado, aunque no esté explícito en el
código proporcionado).

5. Contar Contactos:
○ Usa el método getTamanio() para contar el número de contactos en la lista y
muestra el resultado.
*/

int main(){
    int op;
    bool c=1;

    cout<<"Ingrese una opción: \n 1- Agregar Contactos \n 2- Mostrar contactos"<<endl;
    cout<<" 3- Buscar un contacto por Nombre \n 4- Eliminar un contacto por nombre \n 5- Salir\n";
    cin>>op;

    while (c)
    {
        switch (op){
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    }
    return 0;
}