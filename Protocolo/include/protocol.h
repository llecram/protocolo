#ifndef PROTOCOL_H
#define PROTOCOL_H
#include "../ops.h"
class protocol{
    public:
        protocol();
        string arreglar(string);
    private:
        int clave_C;
        string clave_E;
        int claveA_A;
        int claveB_A;
        string mensaje_aux;
        string mensaje;
};

#endif // PROTOCOL_H
