#include <iostream>
using namespace std;

int main()
{
    
    float pi = 3.1416;
    float perimetro, radio;

    cout << "Ingresa el perimetro"<<endl<<endl;
     cin >> perimetro;

     radio = perimetro / (2*pi);


    cout << "Resultado: " << radio << endl;
    
    system("pause");
    return 0;
}