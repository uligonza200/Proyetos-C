#include <iostream>
using namespace std;

int main()
{
    
    float pi = 3.1416;
    float radio, perimetro;

    cout << "Ingresa el radio" <<endl<<endl;
     cin >> radio;

     perimetro = 2*pi*radio;


    cout << "Resultado: "<< perimetro <<endl; 

    
    system("pause");
    return 0;
}