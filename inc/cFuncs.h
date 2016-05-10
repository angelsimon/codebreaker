#ifndef _CFUNCS_H_
#define _CFUNCS_H_

#include "cVector.h"
#include "cRandom.cpp" // No tiene .h por ser todo estatico.

bool poblarVector(cVector*, unsigned int, bool);
void mostrarVector(cVector);
unsigned int buscarDigito(cVector, int, unsigned int);
void chequearGuess(cVector, cVector, short *, short *);

#endif // _CFUNCS_H_
