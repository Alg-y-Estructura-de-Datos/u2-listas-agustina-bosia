#include <iostream>
#include "Lista/Lista.h"
using namespace std;

/*
 Implementar una función que recibe una lista de números enteros y un número
 entero “n” y que modifique la lista borrando todos los elementos de la lista
 que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado
 a la función para mostrar que la lista original cambió.
 ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe pasar con
 la función a 1->2->4->5->7->8.

 */
void eliminarInt(Lista <int>& list, int num){
    for(int i=0; i<list.getTamanio();i++){
        if(list.getDato(i)==num){
            list.remover(i);
        }
    }
}

int main() {
    Lista <int> list;
    int n,num;

    cout<<"ingrese el tamaño de la lista \n";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"ingrese el dato número "<<i+1<<"\n";
        cin>>num;
        list.insertarUltimo(num);
    }

    cout<<"cual es el número entero que quiere eliminar de la lista? \n";
    cin>>num;

    for(int i=0;i<list.getTamanio();i++){
        cout<<list.getDato(i)<<" ";
    }

    eliminarInt(list,num);

    for(int i=0;i<list.getTamanio();i++){
        cout<<list.getDato(i)<<" ";
    }


    return 0;
}
