#include <iostream>
using namespace std;

// Estructura de un nodo de la lista
struct Nodo {
    double info;
    Nodo* sig;
};

// Prototipos
void crearLista(Nodo*& cab);
void insertarInicio(Nodo*& cab);
void insertarFinal(Nodo*& cab);
void insertarAntesDeX(Nodo*& cab);
void mostrarLista(Nodo* cab);
void eliminarLista(Nodo*& cab);

// main
int main()
{

    Nodo* cab = nullptr;
    int opcion = 0;

    while (opcion != 6)
    {
        system("cls");
        cout << "\n               LISTAS SIMPLES ";
        cout << "\n\n\n";
        cout << "         1. Crear Lista\n";
        cout << "         2. Insertar al Inicio\n";
        cout << "         3. Insertar al final\n";
        cout << "         4. Insertar Antes de X\n";
        cout << "         5. Mostrar la Listas\n";
        cout << "         6. Salir\n\n";
        cout << "\n           Escoja opcion deseada: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                system("cls");
                crearLista(cab);
                system("pause");
                break;

            case 2:
                system("cls");
                insertarInicio(cab);
                system("pause");
                break;

            case 3:
                system("cls");
                insertarFinal(cab);
                system("pause");
                break;

            case 4:
                system("cls");
                insertarAntesDeX(cab);
                system("pause");
                break;

            case 5:
                system("cls");
                mostrarLista(cab);
                system("pause");
                break;

            case 6:
                system("cls");
                eliminarLista(cab);
                cout << "\n !!! Adios !!!\n";
                break;

            default:
                cout << "\n                                ==============================";
                cout << "\n                                ! **** Opcion Invalida ***** !";
                cout << "\n                                ==============================\n";
                system("pause");
        }  // fin del case
    }   // fin del while

    return 0;
}  // fin del main


// Crea lista
void crearLista(Nodo*& cab) {
    
}


// Inserta un nodo al inicio
void insertarInicio(Nodo*& cab) {
    
}


// Inserta un nodo al final
void insertarFinal(Nodo*& cab) {
    
}


// Inserta un nodo antes de la primera aparicion del valor X
void insertarAntesDeX(Nodo*& cab) {
    
}


// Muestra todos los nodos de la lista
void mostrarLista(Nodo* cab) {
    
}


// elimina los nodos
void eliminarLista(Nodo*& cab) {
    
}