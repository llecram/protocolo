#include "enigma.h"
enigma::enigma(string x){
    clave=x[5]+x[6]+x[7];
    string aux;
    for(int i=2;i<5;i++){
        aux=x[i];
        int tmp=string_to_int(aux);
        if(i==2){
            rt1=seleccionar(tmp);
        }
        if(i==3){
            rt2=seleccionar(tmp);
        }
        if(i==4){
            rt3=seleccionar(tmp);
        }
    }
    l1=x[8];
    l2=x[9];
    l3=x[10];
    stecker=x[11]+x[12];
}
string enigma::cifrar(string a){
    int tmp_3, tmp_2, tmp_1;
    string rslt;
    tmp_1=alf.find(clave[0]);
    tmp_2=alf.find(clave[1]);
    tmp_3=alf.find(clave[2]);
    for(int i=0;i<a.size();i++){
        if(a[i]==stecker[0]){
            a[i]=stecker[1];
        }
        else if(a[i]==stecker[1]){
            a[i]=stecker[0];
        }
        string cambio;
        int aux;
        tmp_3=modulo(tmp_3+1,alf.size());
        if(tmp_3==(alf.find(l3))){
            tmp_2++;
        }
        if(tmp_2==(alf.find(l2)-1)){
            tmp_1++;
        }
        cambio=rt3[modulo(alf.find(a[i])+tmp_3,alf.size())];
        cambio=rt2[modulo(alf.find(cambio)-tmp_3+tmp_2,alf.size())];
        cambio=rt1[modulo (alf.find(cambio)+tmp_1-tmp_2,alf.size())];

        cambio=reflector[modulo(alf.find(cambio)-tmp_1,alf.size())];

        aux=modulo(rt1.find(alf[modulo((alf.find(cambio)+tmp_1),(alf.size()))])-tmp_1,alf.size());
        aux=modulo(rt2.find(alf[modulo(aux+tmp_2,alf.size())])-tmp_2,alf.size());
        cambio=alf[modulo(rt3.find(alf[modulo(aux+tmp_3,alf.size())])-tmp_3,alf.size())];
        rslt+=cambio;
        if(rslt[i]==stecker[0]){
            rslt[i]=stecker[1];
        }
        else if(rslt[i]==stecker[1]){
            rslt[i]=stecker[0];
        }
    }
    cout<<tmp_1<<" "<<tmp_2<<" "<<tmp_3<<" "<<endl;
    return rslt;

}
string enigma::descifrar(string a){
    int tmp_3, tmp_2, tmp_1;
    string rslt;
    tmp_1=alf.find(clave[0]);
    tmp_2=alf.find(clave[1]);
    tmp_3=alf.find(clave[2]);
    for(int i=0;i<a.size();i++){
        if(a[i]==stecker[0]){
            a[i]=stecker[1];
        }
        else if(a[i]==stecker[1]){
            a[i]=stecker[0];
        }
        string cambio;
        int aux;
        tmp_3=modulo(tmp_3+1,alf.size());
        if(tmp_3==(alf.find(l3))){
            tmp_2++;
        }
        if(tmp_2==(alf.find(l2)-1)){
            tmp_1++;
        }
        cambio=rt3[modulo(alf.find(a[i])+tmp_3,alf.size())];
        cambio=rt2[modulo(alf.find(cambio)-tmp_3+tmp_2,alf.size())];
        cambio=rt1[modulo (alf.find(cambio)+tmp_1-tmp_2,alf.size())];

        cambio=reflector[modulo(alf.find(cambio)-tmp_1,alf.size())];

        aux=modulo(rt1.find(alf[modulo((alf.find(cambio)+tmp_1),(alf.size()))])-tmp_1,alf.size());
        aux=modulo(rt2.find(alf[modulo(aux+tmp_2,alf.size())])-tmp_2,alf.size());
        cambio=alf[modulo(rt3.find(alf[modulo(aux+tmp_3,alf.size())])-tmp_3,alf.size())];
        rslt+=cambio;
        if(rslt[i]==stecker[0]){
            rslt[i]=stecker[1];
        }
        else if(rslt[i]==stecker[1]){
            rslt[i]=stecker[0];
        }
    }
    return rslt;
}
string enigma::seleccionar(int a){
    switch (a){
    case 1:
        return r1;
    case 2:
        return r2;
    case 3:
        return r3;
    case 4:
        return r4;
    case 5:
        return r5;
    case 6:
        return r6;
    case 7:
        return r7;
    case 8:
        return r8;
    }
}
string enigma::getcl(){
    return clave;
}
string enigma::getst(){
    return stecker;
}
string enigma::getl1(){
    return l1;
}
string enigma::getl2(){
    return l2;
}
string enigma::getl3(){
    return l3;
}
string enigma::getmensaje(){
    return mensaje;
}
void enigma::pedir(){
    cout<<"ingrese el mensaje: ";
    cin>>mensaje;
}
