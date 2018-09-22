#include "protocol.h"
#include "cesar.h"
#include "enigma.h"
#include "affin.h"
protocol::protocol(){
    cesar cifrado_1;
    cifrado_1.pedir();
    mensaje=mensaje+arreglar(int_to_string(cifrado_1.getclave()))+cifrado_1.getmensaje2()+cifrado_1.cifrar(cifrado_1.getmensaje());
    cout<<mensaje;
    enigma cifrado_2(mensaje);
    mensaje=mensaje+cifrado_2.cifrar(cifrado_2.getmensaje());
    cout<<mensaje;
    affin cifrado_3(mensaje);
    cifrado_3.cifrado(cifrado_3.getms());

}
string protocol::arreglar(string a){
    if(a.size()<2){
        a="0"+a;
    }
    return a;
}
