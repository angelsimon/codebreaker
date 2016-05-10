#ifndef _CVECTOR_CPP_
#define _CVECTOR_CPP_

#include "cVector.h"

cVector::cVector(unsigned int newTam){
 if (newTam > 0){
     v = new int[newTam];
     tam = newTam;
 }

 else
   cerr << "Valor para newTam incorrecto";
}

int cVector::buscar(int valorBuscado){
 for(unsigned int i = 0; i < tam; i++){
   if(v[i] == valorBuscado){
     return i;
   }
 }
 return -1;
}

/**
 Función que busca si un valor es encuentra hasta una posición del vector.
 @param int valorBuscado El valor numérico a buscar
 @param unsigned int posicion La posición hasta donde debe buscar
 @return int
*/
int cVector::buscar(int valorBuscado, unsigned int posicion){
 for(unsigned int i = 0; i < posicion; i++){
   if(v[i] == valorBuscado){
     return i;
   }
 }
 return -1;
}

void cVector::set(unsigned int posicion, int valor){
 if(posicion <= tam)
   v[posicion] = valor;
}

int cVector::get(unsigned int posicion){
 if(posicion <= tam)
   return v[posicion];
 else
   return 0;
}

unsigned int cVector::getTamanio(){
 return tam;
}

#endif // _CVECTOR_CPP_
