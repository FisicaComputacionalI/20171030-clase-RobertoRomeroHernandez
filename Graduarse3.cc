//Programa para saber la edad promedio a la que se graduan los estudiantes de la licenciatura de física                                                                        \
//Roberto Romero Hernández                                                                                                                                                     
//30 de octubre de 2017 
#include <vector>                                                                                                                                       
#include <iostream>
using namespace std;
int main()
{
  size_t talla=14;
  vector< int> edad(talla);
  int suma=0;                                                                                                                                                          
  for (int i=0; i<talla; i++)
    {
      cout << "¿A que edad terminaste la carrera?" << endl;
      cin >> edad[i];
      suma+=edad[i];
    }
  for(int j=0; j<talla; j++)
    cout << edad[j] << " , " ;
  cout << "La edad promedio de graduaciòn esperada es " << suma/talla << endl;
  return 0;
}
