#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));// inicializa el generador de numeros aletorios
          int numeroMagico = rand()%100+1;
          int intento;
          
          cout<<"adivina el numero magico(entre 1 y 100):";
          while (true){
          	cin>>intento;
          	if(intento>numeroMagico){
	          cout<<"muy alto. intenta de nuevo:";
	          }else if(intento<numeroMagico) {
	          	cout<<"muy bajo.intenta de nuevo:";
	          }else {
	          	cout<<"correcto El numero magico es"<<numeroMagico<<endl;
	          	break;
	          }
            }
             return 0;
}
 
