#include <iostream>
using namespace std;

int main()
{

  float area, radio;
  float pi = 3.1416;

  cout << "Ingresa el radio del circulo" <<endl<<endl;
   cin >> radio;

   area = pi * (radio*radio);

 cout << "Resultado: " << area <<endl; 

    system("pause");
    return 0;
}