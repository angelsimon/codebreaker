#ifndef _MAIN_CPP_
#define _MAIN_CPP_

#include <iostream>
using namespace std;

#include "inc/cFuncs.h"

/** TODO (angel#1#): Repensar SDL */

void mostrarResultados(int, int);

int main()
{
   path_test();
   cRandom::inicializar();
   cVector v(4);
   cout<<"Poblando vector..."<<endl;
   poblarVector(&v, 5, true);
   cout<<"Contenido del vector:"<<endl;
   mostrarVector(v);
   cout << endl << endl;
   while(true){
      cVector vGuess(4);
      short guess, i, res1=0, res2=0;
      for(i=0; i<4; i++){
         cin >> guess;
         vGuess.set(i, guess);
      }
      chequearGuess(v, vGuess, &res1, &res2);
      mostrarResultados(res1, res2);
      cout << endl;
   }
   return 0;
}

void mostrarResultados(int r1, int r2){
   short i;
   cout << "\t";
   for (i=0; i<r1; i++){
      cout << "O ";
   }
   for (i=0; i<r2; i++){
      cout << "# ";
   }
}

#endif
