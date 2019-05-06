#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int a,b,c;

bool gey = true;

while(gey == true){

cout<<"Skriv vilket räknesätt du vill använda. Addition, Subtraktion, Multiplikation eller Division"<<endl;
string input;
cin>> input;



cout<<"Skriv 2 nummer du vill använda räknesätten med"<<endl;
cin>>a; cin>>b;


if( input == "Addition"){
	
c = a + b;	
	
}

if(input == "Subtraktion"){
	
c = a - b;	
	
}

if(input == "Multiplikation"){
	
c = a * b;	
	
}

if(input == "Division"){
	
c = a / b;
	
}


cout<<c<<endl;


cout<<"vill du avsluta programmet ja eller nej ";
cin>>input;

if(input == "nej"){

gey = true;	
	
}


if(input == "ja"){
	
gey = false;	
	
}
}


cout<<"hejdå";

	return 0;
}
