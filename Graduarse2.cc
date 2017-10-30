 //Programa para saber la edad promedio a la que se graduan los estudiantes de la licenciatura de física                                                                         //Roberto Romero Hernández                                                                                                                                                     
 //30 de octubre de 2017                                                                                                                                                          
#include <iostream>
using namespace std;
int main()
{
  size_t talla=14;                                                                                                                                                             
  int*edad=new int[talla];                                                                                                                                       
  int suma=0;
  // con un cout y un cin podríamos establecer aparte el número de la talla                                                                                                      
  for (int i=0; i<talla; i++)                                                                                                                      
    {
      cout << "¿A que edad terminaste la carrera?" << endl;
      cin >> edad[i];
      suma+=edad[i];
    }
  for(int j=0; j<talla; j++)                                                                                                                                
    cout << edad[j] << " , " ;
  cout << "La edad promedio de graduaciòn esperada es " << suma/talla << endl;                                                                                 
  delete [] edad;                                                                                                                                                              
  return 0;
}
