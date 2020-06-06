#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
class pantalla{
private: BITMAP*buffer;
public:
    void crear_buffer();

};
void pantalla (){
    blit(buffer, screen, 0, 0, 0, 0, 1240, 736);}

void pantalla::crear_buffer()
{   buffer=create_bitmap(1240,736);
}

#endif // PANTALLA_H_INCLUDED
