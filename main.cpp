#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include "inc/cFuncs.h"

/** TODO (angel#1#): Repensar SDL */

void mostrarResultados(int, int);

int main()
{
   cRandom::inicializar();
   vector <int> v;
   poblarVector(v, 4);
   cout << "+: ";
   mostrarVector(v);
   cout << endl << "-------------" << endl;
   int i=0;

   while(true){
      cout << "#" << ++i << ": ";
      vector <int> guess = inputGuess(4);
      vector <char> result = checkGuess(v, guess);
      cout << "-" << i << ": ";
      mostrarVector(result);
      cout << endl << endl;

   }

   /*path_test();
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
        cout << "Ingrese el " << i+1 << " º digito: ";
         cin >> guess;
         vGuess.set(i, guess);
      }
      chequearGuess(v, vGuess, &res1, &res2);
      mostrarResultados(res1, res2);
      cout << endl;
   }*/
   return 0;
}

void mostrarResultados(int r1, int r2){
    cout << endl << "Los # son aciertos a cambiar de lugar" << endl << "Los O son aciertos en el lugar correcto: " << endl << endl;
   short i;
   cout << "\t";
   for (i=0; i<r1; i++){
      cout << "O ";
   }
   for (i=0; i<r2; i++){
      cout << "# ";
   }
   cout << endl;
}
