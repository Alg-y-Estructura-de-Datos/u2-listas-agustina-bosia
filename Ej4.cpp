#include <iostream>
#include "Lista/Lista.h"
using namespace std;

/*
 Escribir un programa que pida al usuario una palabra o frase y la almacene en
 una Lista separando letra por letra, luego pedirá al usuario una vocal que
 desee contar y, por último, se debe imprimir por pantalla la lista y el número
 de veces que aparece la vocal en la palabra o frase.
 Validar que la Lista no esté vacía y que la letra a contar que introduzca
 el usuario sea una vocal.*/

bool esVocal(char letra) {
    return letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
           letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U';
}

int contarVoc(Lista<char>& list, char voc) {
    int n = 0;
    for (int i = 0; i < list.getTamanio(); i++) {
        if (tolower(voc) == tolower(list.getDato(i))) {
            n++;
        }
    }
    return n;
}

int main() {
    Lista<char> list;
    string num;
    char voc;

    cout << "Ingrese la frase deseada: \n";
    getline(cin, num);

    for (int i = 0; i < num.length(); i++) {
        list.insertar(i, num[i]);
    }

    if (list.esVacia()) {
        cout << "La frase ingresada es VACIA \n";
        return 1;
    }

    cout << "¿Cuál es la vocal que quieres contar? \n";
    cin >> voc;

    while (!esVocal(voc)) {
        cout << "la letra ingresada NO es una vocal! \n";
        cout << "Cuál es la vocal que queres contar? \n";
        cin >> voc;
    }

    int totalVocales = contarVoc(list, voc);
    cout << "La vocal ingresada aparece un total de " << totalVocales << " veces en la frase insertada: \n";

    for (int i = 0; i < list.getTamanio(); i++) {
        cout << list.getDato(i);
    }
    cout << endl;

    return 0;
}
