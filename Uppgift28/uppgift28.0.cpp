#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int a,b,c;

bool gey = true;

while(gey == true){

cout<<"skriv en uträkning"<<endl;
cin>>a;
char input;
cin>>input;
cin>>b;



if(input == '*'){
	
c = a * b;
	
}

if(input =='/'){
	
c = a/b;	
	
}

if(input =='+'){
	
c = a + b;	
	
}

if(input =='-'){
	
c = a - b;	
	
}


cout<<c<<endl;



cout<<"vill du avsluta programmet ja eller nej ";
string input1;
cin>>input1;

if(input1 == "nej"){

gey = true;	
	
}


if(input1 == "ja"){
	
gey = false;	

}
}
	return 0;
}
