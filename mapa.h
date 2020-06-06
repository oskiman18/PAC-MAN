#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

class mapa{
private: BITMAP*bloque;
        int plano[23][25];
public:
    void asignar_bloque(int);
    void dibujar_plano(int);
    BITMAP getBloque();
    int getPlano();
    void dibujar_mapa();
    void asignar_plano(int[COL][FIL],int[COL][FIL]);
};

void mapa::dibujar_plano(int opcion){

    switch(opcion)
{
    case 1: asignar_plano(mapa::plano,new_plano1); break;
    //case 2: break;
   // case 3: break;
   // case 4: break;


}}


void mapa::asignar_bloque(int valor)
{
    switch (valor)
    {
        case 1: bloque=("bloque1.bmp",NULL);break;
        case 2: bloque=("bloque2.bmp",NULL);break;
        case 3: bloque=("bloque3.bmp",NULL);break;
        case 4: bloque=("bloque4.bmp",NULL);break;
        default:bloque=("bloque5.bmp",NULL);break;

    }



}

void mapa::asignar_plano(int plano[COL][FIL],int plano2[COL][FIL])
{for (int x=0; x<COL; x++)
   {
    for (int y=0; y<FIL;y++)
    {   plano[x][y]= plano2[x][y]; }
   }
}


#endif // MAPA_H_INCLUDED
