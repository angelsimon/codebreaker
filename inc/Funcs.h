#ifndef _FUNCS_H_
#define _FUNCS_H_

#include "cVector.h"
#include "cRandom.cpp" // No tiene .h por ser todo estatico.
#include <vector>

void poblarVector(vector <int> &, unsigned short);
void mostrarVector(vector <int>);
void mostrarVector(vector <char>);
vector <int> inputGuess(unsigned short);
vector <char> checkGuess(vector <int>, vector <int>);
unsigned short searchDigit(vector <int> , int, unsigned short);

//void mostrarVector(cVector);
unsigned int buscarDigito(cVector, int, unsigned int);
void chequearGuess(cVector, cVector, short *, short *);
void path_test();

#endif
