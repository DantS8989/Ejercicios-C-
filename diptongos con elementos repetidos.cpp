#include <iostream>
#include <string>
using namespace std;

struct palabra {
    char letra;
    palabra *sig;
};

bool sw = false;

void hallar_dip(palabra *cab);

int main() {
    string texto;
    

    
        palabra *cab = nullptr;
        palabra *p = nullptr;

        cout << "Ingrese una palabra en MAYUSCULAS: ";
        cin >> texto;

        for (size_t i = 0; i < texto.length(); ++i) {
            palabra *q = new palabra;
            q->letra = texto[i];
            q->sig = nullptr;

            if (cab == nullptr) {
                cab = q;
                p = q;
            } else {
                p->sig = q;
                p = q;
            }
        }

        hallar_dip(cab);

        if (sw) {
            cout << "SI HAY DIPTONGO" << endl;
        } else {
            cout << "NO HAY DIPTONGO" << endl;
        }

        
    }


void hallar_dip(palabra *cab) {
    palabra *q, *r;

    if (cab == nullptr)
        cout << "No hay palabras en la lista";
    else {
        if (cab->sig == nullptr) {
            cout << "error palabra de una sola letra\n";
        } else {
            sw = false;
            q = cab;
            r = q->sig;

            while (r != nullptr && sw == false) {
                if (
                    (q->letra == 'A' || q->letra == 'E' || q->letra == 'I' ||q->letra == 'O' || q->letra == 'U')
                    &&
                    (r->letra == 'A' || r->letra == 'E' || r->letra == 'I' ||r->letra == 'O' || r->letra == 'U')
                ) {
                    sw = true;
                } else {
                    q = q->sig;
                    r = r->sig;
                } // finsi
            } // finwhile
        } // finsi
    } // finsi
}