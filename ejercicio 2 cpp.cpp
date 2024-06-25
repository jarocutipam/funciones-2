#include<iostream>
using namespace std;

void porValor(int a) {
	a=10;
	cout<<" dentro de porValor, a= "<<a<<endl;
}

void porReferencia(int &a){
	a=10;
	cout<<"dentro de porRefencia, a ="<<a<<endl;
}

int main(){
	int num=5;
	cout<<"antes de pasar por valor,num = "<<num<<endl;
	porValor(num);
	cout<<"luego de pasar por valor,num = "<<num<<endl;
	
	cout<<"antes de pasar por referencia, num = "<<num<<endl;
	porReferencia(num);
	cout<<"luego de pasar por referencia, num = "<<num<<endl;
	
	return 0;
}
