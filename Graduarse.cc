//Programa para saber la edad promedio a la que se graduan los estudiantes de la licenciatura de física
//Roberto Romero Hernández
//30 de octubre de 2017
#include <iostream>
using namespace std;
int main()
{
  // todos los siguientes comentarios son otra forma de hacer este programa   
  //size_t talla=14;
  int edad[14]; //int*edad=new int[talla];   
  int suma=0;
  // con un cout y un cin podríamos establecer aparte el número de la talla
  for (int i=0; i<14; i++)//en vez del numero se pone talla
  {
      cout << "¿A que edad terminaste la carrera?" << endl;
      cin >> edad[i];
      suma+=edad[i];
  }
  for(int j=0; j<14; j++) //aquí también va talla
    cout << edad[j] << " , " ;
  cout << "La edad promedio de graduaciòn esperada es " << suma/14 << endl;//aqui en sobre talla
  //delete [] edad;
  return 0; 
}
