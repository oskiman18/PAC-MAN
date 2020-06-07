#ifndef PACMI_H_INCLUDED
#define PACMI_H_INCLUDED

class pacman{
private:
    BITMAP *pacmi;
    BITMAP *pacbmp;
    int px, anterior_px,py,anterior_py,sentido;
public:
    pacman(){
   px=TAM*5;
   py=TAM*7;
   sentido=0;
   anterior_px=px;
   anterior_py=py;
    }
    void elegir_pac(int);
    void mostrar_pacmi();
    void pacmi_cerrado();
    void muerte_pac();
    int get_px();
    int get_py();
};

int pacman::get_py()
{ return py;

}

int pacman::get_px()
{
    return px;
}

void pacman::mostrar_pacmi()
{ blit(pacbmp,pacmi,sentido*TAM,0,0,0,TAM,TAM);
    draw_sprite(buffer,pacmi,px,py);

}
void pacman::pacmi_cerrado()
{blit (pacbmp,pacmi,4*TAM,0,0,0,TAM,TAM);
    draw_sprite (buffer,pacmi,px,py);

}

#endif // PACMI_H_INCLUDED
