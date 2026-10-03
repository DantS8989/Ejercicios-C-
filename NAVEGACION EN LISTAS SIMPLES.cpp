/*
Crear un lista con un palabra,  QUE CONTENGA  
EL NOMBRE DE UNA PERSONA EN MAYUSCULA , CUALQUIERA . 
RETORNE CUANTAS CONSONANTES TIENE ESE NOMBRE.   ( SI – SI ).   
NOTA : UNA LETRA POR NODO


struct nombre
{
    char letra;
    nombre *sig;
};



inicio

nombre *cab, *P, *Q;
cab=nullptr;
int conta=0;
int sw=1;
while (sw==1)
    {

        nombre *Q=new nombre;
        escribir "Ingrese una letra en MAYUSCULA: ";
        leer Q->letra;
        Q->sig=nullptr;

        si cab==nullptr
        {
            cab=Q;
            P=Q;
        }
        sino
        {
            P->sig=Q;
            P=Q;
        }
        Q->sig=nullptr;
        escribir "Desea ingresar otra letra? (1=si, 0=no): ";
        leer sw;
    }
    
    P=cab;
    sw=0;

    mientrasque (P!=nullptr)
    {
        si (P!=nullptr && (P->letra!='A' && P->letra!='E' && P->letra!='I' && P->letra!='O' && P->letra!='U'))
        {
            conta++;
        }
        P=P->sig;
    } 
    escribir "El nombre tiene ", conta, " consonantes.";
*/

#include <iostream>
using namespace std;

struct nombre
{
    char letra;
    nombre *sig;
};

int main()
{

    nombre *cab, *P, *Q;

    cab = nullptr;
    int conta =0;
    int sw=1;

    while (sw==1)
    {
        nombre *Q=new nombre;

        cout<<"Ingrese las letras del nombre en MAYUSCULAS: ";
        cin >> Q->letra;

        Q->sig=nullptr;
        
        if (cab==nullptr)
        {
            cab=Q;
            P=Q;
        }
        else
        {
            P->sig=Q;
            P=Q;
        }
            Q->sig=nullptr;
                cout<< "Desea ingresar otra letra? (1=si, 0=no): ";
                cin >> sw;
    }

    P=cab;
    sw=0;

    while (P!=nullptr)
    {
        if (P!=nullptr && (P->letra != 'A' && P->letra != 'E' && P->letra != 'I' && P->letra != 'O' && P->letra != 'U'))
        {
            conta++;
        }
        P=P->sig;

    }
    cout <<"El nombre tiene "<< conta << " consonantes";
}
