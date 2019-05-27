#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int IncreaseFunction(int heltal){
	

heltal = heltal + 2;

return heltal;
	
}

int main(int argc, char** argv) {
	
int a,svar;	
	

	
cout<<"skriv in ett tal";
cin>>a;
	

svar = IncreaseFunction(a);	
	
cout<<svar;
	
	
	
	
	
	return 0;
}
