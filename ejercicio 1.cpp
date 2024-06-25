#include<iostream>
using namespace std;

int saldo=0;

void depositar(){ 
    saldo += 100;
    cout << "se han depositado 100 unidades. nuevo saldo"<<saldo<<endl;
}
void retirar(){
   if(saldo >=100){
   	  saldo -= 100;
   	  cout << "se han retirado 100 unidades. nuevo saldo:"<< saldo << endl;
   } else {
   	   cout <<"saldo insuficiente."<<endl;
   }
}
void mostrarsaldo(){
	cout<< "saldo actual:"<< saldo <<endl;
}
   

void menu(){
    int opcion;
    do {
    	cout<< "\n--- cajero automatico---"<<endl;
    	cout<<"1. depositar 100"<<endl;
    	cout<<"2. retirar 100"<<endl;
    	cout<<"3. mostrar saldo"<<endl;
    	cout<<"4. salir"<< endl;
    	cout<<"seleccionar una opcion:";
    	cin>>opcion;
    	
    	switch (opcion){
    		case 1: 
    			depositar();
    			break;
    		case 2:
    			retirar();
			    break;
			case 3:
				mostrarsaldo();
			    break;
			case 4:
				cout<<"saliendo..."<< endl;
			    break;
			default:
			    cout<< "opcion no valida. intente de nuevo."<<endl;
		}
	} while (opcion !=4);
}
int main(){
	menu();
	return 0;
}

 	
    	
	
