#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int respuesta;
    while(respuesta!=3){
        cout<<"1. Ejercicio"<<endl;
        cout<<"2. Suma"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese opcion: ";
        cin>>respuesta;
        switch (respuesta)
        {
        case 1:
            
            break;
        
        case 2:
            int limite=0, acumulador=0;
            cout<<"Ingrese el limite: ";
            cin>>limite;
            for (int i = 0; i <=limite; i++)
            {

                acumulador+=((2*i)-1)*((2*i)+1);
            }
            cout<<endl;
            cout<<"La respuesta es: "<< acumulador <<endl;
            break;

            case 3:
            return 0;
            break;
        }  
    }

}