#include <iostream>
#include "Lista/Lista.h"
/*
Implementar una función llamada “printLista” que reciba una lista y una
 posición “p” e imprima los elementos de esa lista a partir de la posición “p”.
 No debe modificarse la lista original.
 Ej: listaOriginal: 1->2->3->4->5->6->7->8->9->10 con p=5 Por pantalla se verá:
6->7->8->9->10
 */


using namespace std;

void printLista(Lista <int>list,int num){
    int tama=list.getTamanio();
    if (tama<num){
        cout<<"fuera de los límites de la lista \n";
        return;
    }

    for(int i=num-1;i<tama;i++){
        cout<<list.getDato(i)<<" ";
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

    cout<<"a partir de que posición de la lista quiere imprimir? \n";
    cin>>num;

    printLista(list, num);
    return 0;
}
