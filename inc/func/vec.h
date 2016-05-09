#ifndef FVEC_H_INCLUDED
#define FVEC_H_INCLUDED

/* FUNCIONES QUE TRABAJAN CON EL OBJETO VECTOR */
bool poblarVector(Vector *vec, unsigned int tope, bool estricto = true){
  unsigned int i;
  if (estricto && tope < vec->getTamanio()){
    return false;
  }
  for(i = 0; i < vec->getTamanio(); i++){
    int nro;
    if(estricto){
      do{
        nro = Random::getRandom(tope);
      }while(vec->buscar(nro, i) != -1);
    }
    vec->set(i, nro);
  }
  return true;
}

void mostrarVector(Vector vec){
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
unsigned int buscarDigito(Vector pajar, int aguja, unsigned int pos){
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

void chequearGuess(Vector code, Vector guess, short *r1, short *r2){
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

#endif // FVEC_H_INCLUDED
