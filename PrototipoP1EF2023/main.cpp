#include <iostream>
#include "Usuarios.h"

using namespace std;

Usuario ingreso;


int main() {


    int opcion;
    do{
        system("cls");
        cout <<"\t\t\t----------------------------------"<<endl;
        cout <<"\t\t\t |           Bienvenido          |"<<endl;
        cout <<"\t\t\t----------------------------------"<<endl;
        cout<<"\t\t\t 1. Autenticacion"<<endl;
        cout<<"\t\t\t 2. Ingreso de Usuario (Servira para Autenticarte)"<<endl;
	    cout<<"\t\t\t 3. Salir"<<endl;
	    cout<<"\t\t\t-------------------------------"<<endl;
	    cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl; // Se imprime una línea indicando que se debe elegir una opción
	    cout<<"\t\t\t-------------------------------"<<endl;
	    cout<<"Ingresa tu Opcion: ";
        cin>>opcion;
        switch(opcion)
        {
        case 1:
        {
            bool usuarioCorrecto = ingreso.verificarUsuario();
            if (usuarioCorrecto){
            //menu();
            }
            break;
        }
        case 2:
            ingreso.ingresarUsuarios();
            break;
        case 3:
            cout<<"\n\n\n\t\t\tGracias por usar nuestro programa!!!\n\n\n"<<endl;
            system("pause");
            exit(0);
            break;
        }
    }while(opcion!= 3);


    return 0;
}
