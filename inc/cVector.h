#ifndef _CVECTOR_H_
#define _CVECTOR_H_

#include <iostream>
using namespace std;

class cVector
{
   private:
            int *v;
            unsigned int elementos;
            unsigned int tam;
   public:
            cVector(unsigned int);
            int buscar(int);
            int buscar(int, unsigned int);
            void set(unsigned int, int);
            int get(unsigned int);
            unsigned int getTamanio();
};

#endif // _CVECTOR_H_
