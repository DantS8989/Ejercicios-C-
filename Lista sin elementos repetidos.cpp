#include <iostream>
using namespace std;

struct Nodo 
{
int num;
Nodo *sig;
};

int main() 
{

Nodo *cab, *Q, *P, *R;
cab = nullptr;

int opc=1;

while (opc==1) 
    {
        Q =new(Nodo);
        cout <<"Digite elementos a insertar en la lista: ";
        cin >> Q->num;

        if (cab=nullptr) 
        {
            cab=Q;
            P=Q;
        } 
        else 
        {

            R = cab;
            int sw = 0;

            while (R!=nullptr && sw==0)
            {
                if (R->num=Q->num)
                {
                    sw=1;
                }
                else
                {
                R=R->sig;
                }

            }
        if (sw==0)
        {
            P->sig=Q;
            Q->sig=nullptr;
        P=Q;

        } //finsi

        
        }//finsi
        cout << "Desea ingresar mas datos 1=si, 2=No";
        cin >> opc;
    }//finwhile

    P=cab;
    while (P!=nullptr)
    {
        cout <<P->num;

        P=P->sig;

    }//finwhile

}

