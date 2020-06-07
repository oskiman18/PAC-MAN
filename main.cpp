#include <iostream>
#include <cstdio>
#include <allegro.h>
#include <string>

BITMAP*buffer;
BITMAP*mapa;

using namespace std;

const int TAM=32;
const int COL=23;
const int FIL=25;

#include "funciones.h"
#include "pacmi.h"
#include "mapa.h"

int main()
{   pacman p;
    mapa m;
    inicia_allegro(1240,736);
    inicia_audio(70,70);
    while (game_over())
{
   pantalla();
    m.dibujar_mapa();
    readkey();
   }
    return 0;
}

END_OF_MAIN()
