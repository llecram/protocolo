#include "cesar.h"
cesar::cesar(){
    clave=modulo(genera(),alf.size());
}
cesar::cesar(int b){
    clave=b;
}
string cesar::cifrar(string a){
   string rslt;
    for(int i=0;i<a.size();i++){
        int aux=modulo(alf.find(a[i])+clave,alf.size());
        rslt+=alf[aux];
    }
    return rslt;
}
string cesar::descifrar(string a){
    string rslt;
    for(int i=0;i<a.size();i++){
        int aux=modulo(alf.find(a[i])-clave,alf.size());
        rslt+=alf[aux];
    }
    return rslt;
}
int cesar::getclave(){
    return clave;
}
string cesar::getmensaje(){
    return mensaje;
}
string cesar::getmensaje2(){
    return mensaje2;
}
void cesar::pedir(){
    cout<<"ingrese el mensaje: ";
    cin>>mensaje2;
    cin>>mensaje;
}
