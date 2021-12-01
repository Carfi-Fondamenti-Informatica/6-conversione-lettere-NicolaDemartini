#include "lib.h"
bool converti_carattere (char &a){
    bool w = true;
    if((a >= 65 && a <= 90)or(a >= 97 && a <= 122)){
        w = true;
        if(a >= 65 && a <= 90){
            a=a+32;
            return a;
        }else{
            a=a-32;
            return a;
        }
    }else{
        w=false;
    }
    return w;
}
