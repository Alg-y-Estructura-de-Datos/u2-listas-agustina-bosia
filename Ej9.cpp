/*
Ejercicio N°9: APLICACIÓN DE DOBLE ENLAZADA.

 Gestión de Historial de Navegación en un Navegador
Desarrolla un programa que simule el historial de páginas web visitadas en un navegador utilizando una lista doblemente enlazada. El programa debe permitir al usuario retroceder y avanzar entre las páginas visitadas, mostrando sus direcciones en pantalla.
Requisitos:

 Estructura de Datos:
* Usa el concepto de una lista doblemente enlazada para mantener el historial de páginas web visitadas.
* Cada nodo de la lista debe almacenar la URL de la página web visitada.

 Funciones del Programa:
* Añadir Página: Permite agregar una nueva URL al final del historial de navegación.
* Mostrar Histórico: Muestra todas las URLs del historial desde la más antigua a la más reciente.
* Retroceder: Permite al usuario retroceder a la página web visitada anteriormente, mostrando la URL en pantalla.
* Avanzar: Permite al usuario avanzar a la siguiente página web en el historial, mostrando la URL en pantalla.

 Interfaz del Usuario:
* La interfaz debe ser de línea de comandos y debe permitir al usuario ingresar URLs y navegar a través del historial usando comandos simples.
* Implementa un menú para que el usuario pueda elegir entre las opciones disponibles: añadir una página, mostrar el historial, retroceder, avanzar, y salir del programa.
*/
#include <iostream>
#include "Lista/ListaDoble.h"
using namespace std;

int main(){
    ListaDoble <string> lista;
    int op=0;
    int posActual=-1;
    string pag;

    while (op<19)
    {
        cout<<" 1- Añadir Página: \n 2- Mostrar Historial \n 3- Retroceder \n 4- Avanzar \n 5- Salir\n";
        cin>>op;
        switch (op){
        case 1:
            cout<<"ingrese la página web:";
            cin>>pag;
            lista.insertarUltimo(pag);
            break;
        case 2:
            cout<<"Lista de url' s:\n";
            for(int i=0;i<lista.getTamanio();i++){
                cout<<" "<<lista.getDato(i);
            }
            cout<<endl;
            break;
        case 3:
            if(posActual<1){
                cout<<"no se puede retroceder más"<<endl;
            }
            else{
                posActual--;
                cout<<"la página que se insertó es: "<<lista.getDato(posActual)<<endl;
            }
            break;
        case 4:
            if(posActual>=lista.getTamanio()){
                cout<<"no se puede avnzar más"<<endl;
            }
            else{
                posActual++;
                cout<<"la página que se insertó es: "<<lista.getDato(posActual)<<endl;;   
            }
            break;
        default:
            cout<<"Saliendo del programa...";
            return 0;
            break;
        }
    }
    
   
}

