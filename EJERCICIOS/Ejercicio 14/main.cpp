#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int nota=0;
	
	cout << "Ingerse la nota obtenida:  "<<endl;
	cin>> nota;
	
	if(nota>100 || nota<0){
		
		cout<<"Ingrese una nota entres 0 y 100. ";
		
		return 0;
	}
	
	if(nota>=95 && nota<=100){
		
 		cout<<"obtuvistes una A";
	}
	
	if(nota>=85 && nota<=94){
		
 		cout<<"obtuvistes una B";
	}
	
	if(nota>=75 && nota<=84){
		
 		cout<<"obtuvistes una c";
	}
	
	if(nota>=65 && nota<=74){
		
 		cout<<"obtuvistes una D";
	}
	
	if(nota>=60 && nota<=64){
		
 		cout<<"obtuvistes una E";
	}
	
	
	
	if(nota<60){
		
 		cout<<"obtuvistes una f";
	}
	return 0;
}
