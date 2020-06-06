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

};

void mapa::dibujar_plano(int opcion){

    switch(opcion)
{
    case 1:  int new_plano[23][25]={
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


};break;
    case 2: break;
    case 3: break;
    case 4: break;


}
for (int x=0; x<25; x++)
   {
    for (int y=0; y<23;y++)
    {   plano[x][y]= new_plano[x][y]; }
   }
}

void mapa::asignar_bloque(int valor)
{
    switch (valor)
    {
        case 1: bloque=("utn.bmp",NULL);break;
        case 2: bloque=("bloque2.bmp",NULL);break;
        case 3: bloque=("bloque3.bmp",NULL);break;
        case 4: bloque=("bloque4.bmp",NULL);break;
        default: bloque=("bloque5.bmp",NULL);break;

    }



}




#endif // MAPA_H_INCLUDED