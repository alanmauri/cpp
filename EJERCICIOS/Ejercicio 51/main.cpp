#include <iostream>
#include <math.h>
#define pi 3.1416

using namespace std;

int main(int argc, char** argv) {
	
	double numero=0, seno=0, coseno=0, tangente=0;
	
	numero = 2*pi;
	seno = sin(numero);
	coseno= cos(numero);
	tangente= tan(numero);
	
	cout<<"numero: "<< numero <<endl;
	cout<<"seno: "<< seno <<endl;
	cout<<"coseno: "<< coseno <<endl;
	cout<<"tangente: "<< tangente <<endl;
	
	
	return 0;
}
