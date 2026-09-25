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
    int cantidad;
    double dato;

    // Elimina la lista anterior si ya hay una creada
    eliminarLista(cab);

    cout << "\nCREACION DE LA LISTA\n";
    cout << "Cuantos nodos desea crear: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que cero.\n";
        return;
    }

    for (int i = 1; i <= cantidad; i++) {
        cout << "Digite el valor del nodo #" << i << ": ";
        cin >> dato;

        Nodo* nuevo = new Nodo;
        nuevo->info = dato;
        nuevo->sig = nullptr;

        if (cab == nullptr) {
            cab = nuevo;
        } else {
            Nodo* aux = cab;

            while (aux->sig != nullptr) {
                aux = aux->sig;
            }

            aux->sig = nuevo;
        }
    }

    cout << "\nLista creada correctamente.\n";
}


// Inserta un nodo al inicio
void insertarInicio(Nodo*& cab) {
    double dato;

    cout << "\nINSERTAR AL INICIO\n";
    cout << "Digite el valor: ";
    cin >> dato;

    Nodo* nuevo = new Nodo;
    nuevo->info = dato;

    // El nuevo nodo apunta a la cab actual
    nuevo->sig = cab;

    // La cabeza pasa a ser el nuevo nodo
    cab = nuevo;

    cout << "Dato insertado correctamente.\n";
}


// Inserta un nodo al final
void insertarFinal(Nodo*& cab) {
    double dato;

    cout << "\nINSERTAR AL FINAL\n";
    cout << "Digite el dato: ";
    cin >> dato;

    Nodo* nuevo = new Nodo;
    nuevo->info = dato;
    nuevo->sig = nullptr;

    // Si la lista esta vacia, el nuevo nodo sera la cabeza
    if (cab == nullptr) {
        cab = nuevo;
    } else {
        Nodo* aux = cab;

        // Recorre la lista hasta encontrar el ultimo nodo
        while (aux->sig != nullptr) {
            aux = aux->sig;
        }

        aux->sig = nuevo;
    }

    cout << "valor insertado correctamente.\n";
}


// Inserta un nodo antes de la primera aparicion del valor X
void insertarAntesDeX(Nodo*& cab) {
    int x;
    double dato;

    cout << "\nINSERTAR ANTES DE X\n";
    cout << "Digite el valor X: ";
    cin >> x;

    cout << "Digite el valor que desea insertar: ";
    cin >> dato;

    if (cab == nullptr) {
        cout << "La lista esta vacia.\n";
        return;
    }

    //si X esta en el primer nodo
    if (cab->info == x) {
        Nodo* nuevo = new Nodo;
        nuevo->info = dato;
        nuevo->sig = cab;
        cab = nuevo;

        cout << "valor insertado antes de X.\n";
        return;
    }

    Nodo* anterior = cab;
    Nodo* actual = cab->sig;

    // Busca el nodo que contiene X
    while (actual != nullptr && actual->info != x) {
        anterior = actual;
        actual = actual->sig;
    }

    if (actual == nullptr) {
        cout << "El valor X no se encuentra en la lista.\n";
        return;
    }

    Nodo* nuevo = new Nodo;
    nuevo->info = dato;

    // El nuevo nodo apunta al nodo que contiene X
    nuevo->sig = actual;

    // El nodo anterior apunta al nuevo nodo
    anterior->sig = nuevo;

    cout << "valor insertado antes de X.\n";
}


// Muestra todos los nodos de la lista
void mostrarLista(Nodo* cab) {
    cout << "\nLISTA ACTUAL\n";

    if (cab == nullptr) {
        cout << "La lista esta vacia.\n";
        return;
    }

    Nodo* aux = cab;

    while (aux != nullptr) {
        cout << "  " << aux->info << "  ->  ";
        aux = aux->sig;
    }

    cout << "NULL\n";
}


// elimina los nodos
void eliminarLista(Nodo*& cab) {
    while (cab != nullptr) {
        Nodo* aux = cab;
        cab = cab->sig;
        delete aux;
    }
}