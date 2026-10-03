#include <iostream>
using namespace std;


struct palabra
{
    char letra;
    palabra *sig;

};

int sw=1;

int main (){

palabra *cab, *P, *Q, *R;


cab=nullptr;

while (sw == 1) 
    {
    palabra *Q = new palabra;
    cout << "Ingrese una letra en MAYUSCULA: ";
    cin >> Q->letra;
    
        if (cab == nullptr) 
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
        cout << "Desea ingresar otra letra? (1=si, 0=no): ";
        cin >> sw;
    }
    P=cab;
    sw=0;

    while (P!=nullptr) 
    {

        R=P->sig;

        if (P->letra=='A'||P->letra=='E'||P->letra=='I'||P->letra=='O'||P->letra=='U')
        {
            if (R != nullptr &&
                (R->letra=='A'||R->letra=='E'||R->letra=='I'||R->letra=='O'||R->letra=='U'))
            {
                sw=1;
            }
        }
        
        P=P->sig;
    }

    if (sw == 0) 
    {
        
        cout << "NO HAY DIPTONGO" << endl;
    } 
    else 
    {
        P=cab;
        cout << "cab-> ";
        while (P!=nullptr) 
        {
            cout << P->letra <<" -> ";
            P=P->sig;
        }
        cout << "SI HAY DIPTONGO" << endl;
    }
    
}
