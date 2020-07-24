#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int respuesta;
    while(respuesta!=3){
        cout<<"1. funcion sigmoide"<<endl;
        cout<<"2. Suma"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese opcion: ";
        cin>>respuesta;
        switch (respuesta)
        {
        case 1:
        {
            int x;
            double euler = 2.71828;
            double  respuesta_euler, denominador, respuesta_t;
            cout<<"Ingrese x:";
            cin>>x;
            respuesta_euler = pow(euler, -x);
            denominador = 1 + respuesta_euler;
            respuesta_t = 1 / denominador;
            cout<<endl;
            cout<<"La respuesta es: "<<respuesta_t << endl<<endl;
            break;
        }
        
        case 2:
        {
            int limite, acumulador=0;
            cout<<"Ingrese el limite: ";
            cin>>limite;
            for (int i = 0; i <=limite; i++)
            {
                acumulador+=((2*i)-1)*((2*i)+1);
            }
            cout<<endl;
            cout<<"La respuesta es: "<< acumulador <<endl<<endl;
            break;
        }
        }  
    }

}