#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void inicia_allegro(int ANCHO_ , int ALTO_);
int inicia_audio(int izquierda, int derecha);



void inicia_allegro(int ANCHO_ , int ALTO_){
   allegro_init();
   install_keyboard();

   set_color_depth(32);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, ANCHO_, ALTO_, 0, 0);
}

int inicia_audio(int izquierda, int derecha){
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0) {
       allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
       return 1;
    }

	set_volume(izquierda, derecha);
    return 0;
}
int new_plano1[23][25]={
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
1,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	1,
1,	0,	1,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	0,	1,	1,	1,	0,	1,
1,	0,	1,	0,	0,	0,	1,	0,	1,	1,	0,	0,	0,	0,	0,	1,	1,	0,	1,	0,	0,	0,	1,	0,	1,
1,	0,	1,	0,	1,	1,	1,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	1,	1,	1,	0,	1,	0,	1,
1,	0,	1,	0,	1,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	0,	1,	0,	1,	1,	1,	0,	1,	0,	1,
1,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	3,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,
1,	1,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	0,	1,	1,	1,
1,	1,	1,	0,	1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	1,	0,	1,	1,	1,
2,	2,	2,	0,	1,	0,	1,	0,	1,	0,	1,	1,	0,	1,	1,	0,	1,	0,	1,	0,	1,	0,	2,	2,	2,
1,	1,	1,	0,	1,	0,	1,	0,	1,	0,	1,	0,	7,	0,	1,	0,	1,	0,	1,	0,	1,	0,	1,	1,	1,
1,	1,	1,	0,	1,	0,	1,	0,	1,	0,	1,	4,	5,	6,	1,	0,	1,	0,	1,	0,	1,	0,	1,	1,	1,
1,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,	1,  1,  1,	1,	0,	1,	0,	1,	0,	1,	0,	0,	0,	1,
1,	0,	1,	0,	1,	0,	1,	0,	1,	0,	1,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,	0,	1,	0,	1,
1,	0,	1,	0,	1,	0,	1,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	0,	1,	0,	1,	0,	1,	0,	1,
1,	0,	1,	0,	1,	0,	1,	0,	1,	1,	1,	1,	1,	1,	1,	1,	1,	0,	1,	0,	1,	0,	1,	0,	1,
1,	0,	1,	0,	0,	0,	1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	1,	0,	1,	0,	0,	0,	1,	0,	1,
1,	0,	1,	1,	1,	0,	1,	0,	1,	0,	1,	1,	1,	1,	1,	0,	1,	0,	1,	0,	1,	1,	1,	0,	1,
1,	0,	1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,	0,	1,
1,	0,	0,	0,	1,	0,	1,	1,	1,	0,	1,	1,	1,	1,	1,	0,	1,	1,	1,	0,	1,	0,	0,	0,	1,
1,	0,	1,	1,	1,	0,	1,	1,	1,	0,	1,	1,	1,	1,	1,	0,	1,	1,	1,	0,	1,	1,	1,	0,	1,
1,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	1,
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,


};

void pantalla (){
    buffer = create_bitmap(1240,736);
    blit(buffer, screen, 0, 0, 0, 0, 1240, 736);
    }

    bool game_over()
{
    int plano=mapa::getPlano();
        int x,y;
        for(x=0;x<FIL;x++){
            for(y=0;y<COL;y++){
                    if(plano[y][x] == 0){
                    return true;

                }
           }    if(key[KEY_ESC]) return false;

        }
return false;}


#endif // FUNCIONES_H_INCLUDED
