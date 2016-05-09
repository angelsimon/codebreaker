#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <cstdlib>
#include <ctime>

class Random{

  public:
  static void inicializar(){
    srand(time(NULL));
  };

  static int getRandom(){
    return rand();
  };

  static int getRandom(int fin){
    return rand() % fin+1;
  };

  static int getRandom(int inicio, int fin){
    return (rand()%(fin+1-inicio))+inicio;
  }

};

#endif // RANDOM_H_INCLUDED
