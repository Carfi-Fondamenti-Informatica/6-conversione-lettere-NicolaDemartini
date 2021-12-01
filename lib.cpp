#include "lib.h" 
int Verifica (char c){
    bool risultato;
    if(c>=65 && c<=90){
        risultato = true;
    }
    else if(c>=97 && c<=122){
        risultato = true;
    }
    else{
         risultato = false;
    } return risultato;
}

int Conversione (char c){
    int convertito = 0;
    if(c>=65 && c<=90){
        convertito = c+32;
    } else {
        convertito = c-32;
    } return convertito;
}
