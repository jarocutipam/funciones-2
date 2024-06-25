#include<iostream>
#include<cmath>
using namespace std;

int main() {
double num;
cout<<"ingrese un numero:";
cin >> num;

cout<<"valor absoluto:"<<fabs(num)<<endl;
cout<<"raiz cuadrada:"<<sqrt(num)<<endl;
cout<<"potencia (n^2):"<<pow(num,2)<<endl;
cout<<"redodendeo al entero mas ercano:"<< round(num)<<endl;
cout<<"redonde hacia arriba:"<< ceil(num)<<endl;
cout<<"redondeo hacia abajo:"<<floor(num)<<endl;
cout<<"seno:"<< sin(num)<< endl;
cout<<"coseno:"<< cos(num)<<endl;
cout<<"tangente:"<<tan(num)<<endl;

return 0;
}