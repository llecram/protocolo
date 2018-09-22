#ifndef CESAR_H
#define CESAR_H
#include "..\ops.h"
class cesar{
    public:
        cesar();
        cesar(int);
        string cifrar(string);
        string descifrar(string);
        int getclave();
        string getmensaje();
        string getmensaje2();
        void pedir();
    private:
        int clave;
        string mensaje2;
        string mensaje;
};

#endif // CESAR_H
