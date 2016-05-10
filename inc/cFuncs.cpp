#ifndef _FUNCS_CPP_
#define _FUNCS_CPP_

#include "cFuncs.h"

/* FUNCIONES QUE TRABAJAN CON EL OBJETO VECTOR */
bool poblarVector(cVector *vec, unsigned int tope, bool estricto = true){
  unsigned int i;
  if (estricto && tope < vec->getTamanio()){
    return false;
  }
  for(i = 0; i < vec->getTamanio(); i++){
    int nro;
    if(estricto){
      do{
        nro = cRandom::getRandom(tope);
      }while(vec->buscar(nro, i) != -1);
    }
    vec->set(i, nro);
  }
  return true;
}

void mostrarVector(cVector vec){
  unsigned int i;
  for(i = 0; i < vec.getTamanio(); i++){
    cout << vec.get(i) << " ";
  }
}
/**
* Función que busca si el digito (aguja) se encuentra o no en el vector (pajar).
* @return unsigned int
* 1 - Si el digito se encuentra en la posición indicada
* 2 - Si el digito se encuentra en otra posición
* 0 - Si el digito no se encuentra
*/
unsigned int buscarDigito(cVector pajar, int aguja, unsigned int pos){
  if(pajar.get(pos) == aguja){
    return 1;
  }
  else{
    if(pajar.buscar(aguja) != -1){
      return 2;
    }
    else{
      return 0;
    }
  }
}

void chequearGuess(cVector code, cVector guess, short *r1, short *r2){
  unsigned short i;
  for(i = 0; i < code.getTamanio(); i++){
    short r;
    r = buscarDigito(code, guess.get(i), i);
    if (r == 1){
      *r1 = *r1 +1;
    }
    else if(r == 2){
      *r2 = *r2 + 1;
    }
  }
}

#endif // _FUNCS_CPP_
