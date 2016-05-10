#ifndef _FUNCS_CPP_
#define _FUNCS_CPP_

#include "config.cpp"
#include "cFuncs.h"
#include <vector>
#include <algorithm>

void poblarVector(vector <int> &vec, unsigned short tam)
{
   std::vector<int>::iterator it;
   int nro;
   for(int i=0; i<tam; i++)
   {
      do
      {
         nro = cRandom::getRandom(0, 9);
         it = std::find(vec.begin(), vec.end(), nro);
      }
      while(it != vec.end());
      vec.push_back(nro);
   }
}
void mostrarVector(vector <int> vec)
{
   for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
   {
      cout << *it << " ";
   }
}
void mostrarVector(vector <char> vec)
{
   for(std::vector<char>::iterator it = vec.begin(); it != vec.end(); ++it)
   {
      cout << *it << " ";
   }
}
vector <char> checkGuess(vector <int> code, vector <int> guess)
{
   vector <char> result;
   unsigned short tam = code.size();
   for(int i=0; i<tam; i++)
   {
      int value = searchDigit(code, guess.at(i), i);
      if (value == 1)
      {
         result.push_back('O');
      }
      else if (value == 2)
      {
         result.push_back('#');
      }
   }
   return result;
}

unsigned short searchDigit(vector <int> v, int value, unsigned short pos)
{
   if (v.at(pos) == value)
   {
      return 1;
   }
   else
   {
      std::vector<int>::iterator it;
      it = std::find(v.begin(), v.end(), value);
      if (it != v.end())
      {
         return 2;
      }
   }
   return 0;
}

vector <int> inputGuess(unsigned short tam){
   vector <int> guess;
   int nro;
   for(int i=0; i<tam; i++){
      cin >> nro;
      guess.push_back(nro);
   }
   return guess;
}

/* FUNCIONES QUE TRABAJAN CON EL OBJETO VECTOR */
/*bool poblarVector(cVector *vec, unsigned int tope, bool estricto = true){
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
*/
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

void path_test(){
   cout << "----------------------------" << endl;
   cout << "IMAGES: " << PATH_IMAGES << endl;
   cout << "AUDIOS: " << PATH_AUDIOS << endl;
   cout << "FONTS: " << PATH_FONTS << endl;
   cout << "----------------------------" << endl;
}

#endif // _FUNCS_CPP_
