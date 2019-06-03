#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int calc(float a, float b, string input){

float c;
	
if(input == "hyp"){
	
c = (a * a) + (b * b);
			
c = sqrt(c);
	
return c;		
	
}	
	
if(input == "kat"){
	
b = b * b;
a = a * a;

b = b - a;

c = sqrt(b);


return c;	
	
}	
	
}






int main(int argc, char** argv) {
	
float a,b;

	
	
cout<<"Vilken sida ska räknas ut"<<endl;
string input;
cin>>input;	

cout<<"skriv a först sedan b eller c";

	
cin>>a;	
cin>>b;
	



	
	
	
calc(a,b,input);
	
	
	


cout<<calc(a,b,input);


	
return 0;
}
