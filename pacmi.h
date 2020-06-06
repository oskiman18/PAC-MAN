#ifndef PACMI_H_INCLUDED
#define PACMI_H_INCLUDED

class pacman{
private:
    BITMAP *pacmi;
    BITMAP *pacbmp;
    int px, anterior_px,py,anterior_py,sentido;
public:
    void elegir_pac(int);
    void mostrar_pacmi();
    void pacmi_cerrado();
    void muerte_pac();

};

void pacman::mostrar_pacmi()
{ blit(pacbmp,pacmi,sentido*TAM,0,0,0,TAM,TAM);
    draw_sprite(buffer,pacmi,px,py);

}
void pacman::pacmi_cerrado()
{blit (pacbmp,pacmi,4*TAM,0,0,0,TAM,TAM);
    draw_sprite (buffer,pacmi,px,py);

}

#endif // PACMI_H_INCLUDED
