#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector{
  private:
    int *v;
    unsigned int elementos;
    unsigned int tam;
  public:
    Vector(unsigned int);
    int buscar(int);
    int buscar(int, unsigned int);
    void set(unsigned int, int);
    int get(unsigned int);
    unsigned int getTamanio();
};

  Vector::Vector(unsigned int newTam){
    if (newTam > 0){
        v = new int[newTam];
        tam = newTam;
    }

    else
      cerr << "Valor para newTam incorrecto";
  }

  int Vector::buscar(int valorBuscado){
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

  int Vector::buscar(int valorBuscado, unsigned int posicion){
    for(unsigned int i = 0; i < posicion; i++){
      if(v[i] == valorBuscado){
        return i;
      }
    }
    return -1;
  }

  void Vector::set(unsigned int posicion, int valor){
    if(posicion <= tam)
      v[posicion] = valor;
  }

  int Vector::get(unsigned int posicion){
    if(posicion <= tam)
      return v[posicion];
    else
      return 0;
  }

  unsigned int Vector::getTamanio(){
    return tam;
  }

#endif // VECTOR_H_INCLUDED
