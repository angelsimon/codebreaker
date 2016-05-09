#include <iostream>
using namespace std;

//CLASES
#include "inc/cls/Random.h"
#include "inc/cls/Vector.h"

//FUNCIONES
#include "inc/func/vec.h"

/** TODO (angel#1#): Repensar SDL */ :)

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

int main()
{
   Random::inicializar();
   Vector v(4);
   cout<<"Poblando vector..."<<endl;
   poblarVector(&v, 5, true);
   cout<<"Contenido del vector:"<<endl;
   mostrarVector(v);
   cout << endl << endl;
   while(true){
      Vector vGuess(4);
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
