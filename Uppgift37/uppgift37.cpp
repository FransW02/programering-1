#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;



int calculator(int x, char asmd, int y, int c){
	

if(asmd == '*'){
	
c = x * y;
	
}

if(asmd =='/'){
	
c = x / y;	
	
}

if(asmd =='+'){
	
c = x + y;	
	
}

if(asmd =='-'){
	
c = x - y;	
	
}
	

	
	
cout<<c;
	
	
	
}

int main(int argc, char** argv) {

int x,y,c;
char asmd;

cout<<"skriv en uträkning";
cin>>x;
cin>>asmd;
cin>>y;

calculator(x,asmd,y,c);


	return 0;
}
