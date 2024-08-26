/*Desarrolla un programa para gestionar un monitor publicitario que debe mostrar frases de
anuncios de manera circular. Para lograr esto, implementarás una solución utilizando una lista
circular simplemente enlazada.
Requisitos:
1. Frases de Anuncios:
○ Cada frase de anuncio será un texto simple que el monitor debe mostrar por
vez.
2. Mostrar Circularmente:
○ Las frases deben mostrarse en un formato circular, es decir, una vez que se ha
mostrado la última frase, el monitor debe volver a mostrar la primera y así
infinitamente.
3. Implementación:
○ Utiliza una lista circular simplemente enlazada para gestionar el almacenamiento
y la visualización de las frases. La lista circular debe permitir el recorrido
continuo de los elementos.
4. Operaciones Básicas:
○ Agregar Frases: Capacidad para añadir nuevas frases a la lista circular.
○ Eliminar Frases: Capacidad para eliminar frases específicas de la lista.
○ Mostrar Frases: Implementa una función para mostrar las frases en el monitor
de manera continua, recorriendo circularmente la lista e infinitamente*/
#include <iostream>
using namespace std;
#include "Lista/CircList.h"

int main(){
    CircList<string> lista;
    int op;
    int cont=0;
    string frase;
    bool c=1;
    
    cout<<"Ingrese una opción: \n 1- Agregar Frase \n 2- Eliminar Frase \n 3- Mostrar Frases\n 6- Salir\n";
    cin>>op;
        switch (op){
        case 1:
            cout<<"ingrese la frase:";
            cin>>frase;
            cin.ignore();
            lista.insertarPrimero(frase);
            break;
        case 2:
            cout<<"ingrese la frase que se quiere eliminar:";
            cin>>frase;
            lista.eliminarPorValor(frase);
            break;
        case 3:
            while(cont<20){
                lista.imprimir();
                cont ++;
            }
            break;
        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    
}