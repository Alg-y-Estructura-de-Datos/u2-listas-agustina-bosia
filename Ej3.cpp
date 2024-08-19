#include <iostream>
#include "Lista/Lista.h"
using namespace std;
/* Implementar una función que intercambie los elementos entre 2 listas de números
 enteros que recibe como parámetros. Si los tamaños de las listas son distintos,
 igual debe cambiar los datos y cambiarían los tamaños de cada lista.
 Ejemplo sea lista1= 15->1->8->35->40->25->12 y lista2= 3->4->912->45->66
 al ejecutar la función quedarían lista1= 3->4->912->45->66 y
 lista2=15->1->8->35->40->25->12.*/

void intercambiar(Lista<int>& list1, Lista<int>& list2) {
    int minSize = min(list1.getTamanio(), list2.getTamanio());

    for (int i = 0; i < minSize; i++) {
        int temp = list1.getDato(i);
        list1.reemplazar(i, list2.getDato(i));
        list2.reemplazar(i, temp);
    }

    while (list1.getTamanio() > minSize) {
        list2.insertarUltimo(list1.getDato(minSize));
        list1.remover(minSize);
    }

    while (list2.getTamanio() > minSize) {
        list1.insertarUltimo(list2.getDato(minSize));
        list2.remover(minSize);
    }
}

int main() {

    cout << "Ejercicio N° 3" << endl;
    Lista <int> list1,list2;
    int n,num;

    cout<<"ingrese el tamaño de la lista 1: \n";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"ingrese el dato número "<<i+1<<" de la lista 1: \n";
        cin>>num;
        list1.insertarUltimo(num);
    }

    cout<<"ingrese el tamaño de la lista 2: \n";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"ingrese el dato número "<<i+1<<" de la lista 2: \n";
        cin>>num;
        list2.insertarUltimo(num);
    }

    cout<<"LISTAS ORIGINALES: \n";
    for(int i=0;i<list1.getTamanio();i++){
        cout<<list1.getDato(i)<<" ";
    }
    cout<<"\n";
    for(int i=0;i<list2.getTamanio();i++){
        cout<<list2.getDato(i)<<" ";
    }

    intercambiar(list1,list2);
    cout<<"\n";

    cout<<"LISTAS INTERCAMBIADAS: \n";

    for(int i=0;i<list1.getTamanio();i++){
        cout<<list1.getDato(i)<<" ";
    }
    cout<<"\n";

    for(int i=0;i<list2.getTamanio();i++){
        cout<<list2.getDato(i)<<" ";
    }
    return 0;
}
