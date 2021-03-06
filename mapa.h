#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

class mapa{
private:
    BITMAP*bloque;
    BITMAP*camino;
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
        case 1: bloque=("bloques\bloque1.bmp",NULL);break;
        case 2: bloque=("bloques\bloque2.bmp",NULL);break;
        case 3: bloque=("bloques\bloque3.bmp",NULL);break;
        case 4: bloque=("bloques\bloque4.bmp",NULL);break;
        default:bloque=("bloques\bloque5.bmp",NULL);break;

    }



}

void mapa::asignar_plano(int plano[COL][FIL],int plano2[COL][FIL])
{for (int x=0; x<COL; x++)
   {
    for (int y=0; y<FIL;y++)
    {   plano[x][y]= plano2[x][y]; }
   }
}


 void mapa::dibujar_mapa()
    {
        pacman p;
        int x,y;
        for(x=0;x<COL;x++)
        {
            for(y=0;y<FIL;y++)
            {   if(mapa::plano[y][x]==1)
                 {
                     draw_sprite(buffer,bloque,x*TAM,y*TAM);
                 }
                else  if (mapa::plano[y][x]==0 || mapa::plano[y][x]==5){draw_sprite(buffer,camino,x*TAM,y*TAM);}
                if ((p.get_py()/TAM == y) && (p.get_px()/TAM == x)) {mapa::plano[y][x] = 3;}
                 }

            }
    }

#endif // MAPA_H_INCLUDED
