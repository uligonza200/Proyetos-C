/*BY: ENCODE57 Youtube https://www.youtube.com/channel/UCxXWOkY4ope6-kKYBj5kCRQ?view_as=subscriber*/
#include <iostream>
using namespace std;

int main()
{

    float num1, num2, rdivi, rmult; /*variables para divicion y multiplicacion*/ 

    int num1sr, num2sr, rrestasr; /*variables para suma y resta*/

    cout <<"Ingresa el numero 1: " <<endl;
     cin >> num1sr; 

    cout <<"Ingresa el numero 2: " <<endl;
     cin >> num2sr; 


     rrestasr = num1sr + num2sr; 

cout << "Resultado Suma: " << rrestasr <<endl;/*resultado suma*/

cout <<"-----------------------------------------------------"<<endl<<endl;

    cout <<"Ingresa el numero 1: " <<endl;
     cin >> num1sr; 

    cout <<"Ingresa el numero 2: " <<endl;
     cin >> num2sr; 


     rrestasr = num1sr - num2sr; 

    cout << "Resultado Resta: " << rrestasr <<endl;/*resultado resta*/

cout <<"-----------------------------------------------------"<<endl<<endl;

    cout <<"Ingresa el numero 1: " <<endl;
     cin >> num1; 

    cout <<"Ingresa el numero 2: " <<endl;
     cin >> num2; 


     rdivi = num1 / num2; 

    cout << "Resultado Divicion: " << rdivi <<endl;/*resultado divicion*/

cout <<"-----------------------------------------------------"<<endl<<endl;

    cout <<"Ingresa el numero 1: " <<endl;
     cin >> num1; 

    cout <<"Ingresa el numero 2: " <<endl;
     cin >> num2; 


     rmult = num1 * num2; 

    cout << "Resultado Multiplicacion: " << rmult <<endl<<endl;/*resultado multiplicacion*/
    
    system("pause");
    return 0;
}