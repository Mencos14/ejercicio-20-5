#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int eleccion;
    int a;
    int t;
    t = time(NULL);
    srand(t);
    a = rand() % 3 + 1;
    cout << a;

    cout << "esto es un juego de piedra, papel o tijera \n ";
    cout << " 1.piedra\n ";
    cout << " 2.papel\n ";
    cout << " 3.tijera\n ";
    cin >> eleccion;

    if (eleccion >=1 && eleccion <=3)
    {
        if (eleccion ==1 && a ==3)
        {
            cout << "has ganado con piedras a tijeras";
        }
        else if (eleccion ==2 && a ==1)
        {
            cout << "la maquina ha ganado con piedra a papel";
        }
        else if (eleccion ==2 && a ==3)
        {
            cout << "la maquina ha ganado con tijeras a papel";
        }
        else if (eleccion ==3 && a ==2)
        {
            cout << "has ganado con tijeras a papel";
        }
        else
        {
            cout << "el resultado es un empate";
        }
    }

    else
    {
        cout << "el valor ingresado es invalido";
    }

    
    return 0;

    }
