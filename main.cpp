#include <iostream>
#include "hola.h"

using namespace std;

bool enJuego = true;
string input;

int main()
{
    hola();
    while(enJuego)
    {
        cin>>input;
        if (input=="f")
        {
            enJuego = false;
        }
    }

    return 0;
}
