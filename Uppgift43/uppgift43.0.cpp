#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



using namespace std;
int main(int argc, char** argv) {

bool cool = true;


while(cool == true){

int a,c;

int tiden = time(0);


srand(tiden);

	
c = rand()%100 + 1;


cout<<"Gissa på ett nummer mellan 1-100"<<endl;
cin>>a;

for(int i = 4; i > 0;i--){


if(a < c){
	
	
cout<<"Du gissade för lågt"<<endl;	
	
}

if(a > c){
		
cout<<"Du gissade för högt"<<endl;	
	
}


if(a == c){
	
cout<<"Du gissade rätt";
		
return 0;	
}

	
cout<<"du har "<<i<<" försök kvar"<<endl;
cin>>a;

}


string input;

cout<<"Vill du avsluta programmet"<<endl;
cin>>input;

if(input == "ja"){
	
cool = false;	

}

if(input == "nej"){
	
cool = true;	

}

}
	return 0;

}
