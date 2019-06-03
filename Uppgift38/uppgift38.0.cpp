#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int calculator(int x, int y){
	
x = y * 1.8;
x = x + 32;		
	
return x;	
}

int temp(int x, int y){
	
cout<<"skriv in en temperatur i celcius"<<endl;
cin>>y;

	
cout<<calculator(x,y);		
	
}







int main(int argc, char** argv) {
	
int a,b;
	
temp(a,b);	

	
	return 0;
}
