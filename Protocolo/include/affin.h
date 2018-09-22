#ifndef AFFIN_H
#define AFFIN_H
#include "..\ops.h"
class affin{
    private:
        int a;
        int b;
        int inv;
    public:
        affin();
        affin(ZZ,ZZ);
        string cifrado(string);
        string descifrado(string);
        string getms();
        int geta();
        int getb();
        string mensaje_aux;
};

#endif // AFFIN_H
