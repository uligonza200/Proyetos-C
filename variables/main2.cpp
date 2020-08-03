/*BY: ENCODE57 Youtube https://www.youtube.com/channel/UCxXWOkY4ope6-kKYBj5kCRQ?view_as=subscriber*/
/*Top-Down*/
#include <iostream>
using namespace std;

int main()
{
    
    int edad; /*Valores Enteros*/
    char letra; /*Valores de tipo caracter*/
    string nombre; /*Valores tipo cadena de caracteres*/
    float peso; /*Valores flotantes*/
    double estatura; /*Valores double*/
    bool like; /*true 1 - false 0*/

    cout << "Ingresa la edad" <<endl<<endl; /*cout te ayuda a imprimir*/
     cin >> edad; /*cin te ayuda a guardar*/

    cout << "Ingresa la letra" <<endl<<endl;
     cin >> letra;

    cout << "Ingresa el Nombre" <<endl<<endl; 
     cin >> nombre;

    cout << "Ingresa el Peso" <<endl<<endl;
     cin >> peso;

    cout << "Ingresa la Estatura" <<endl<<endl;
     cin >> estatura;

    cout <<"" <<endl;
    cout <<"-------------"<<endl<<endl; /*endl nos ayuda a dar un salto de linea*/

    cout <<  edad <<endl<<endl; /*estamos imprimiendo la variable edad tipo entera*/
    cout <<  letra <<endl<<endl;
    cout << nombre <<endl<<endl;
    cout << peso  <<endl<<endl;
    cout << estatura <<endl<<endl;
    cout << like  <<endl<<endl;
   
    system("pause"); /*pausa la pantalla y no se sierra la ventana*/
    return 0; /*retornamos un 0 porque es una funcion main entera*/
}