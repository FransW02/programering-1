#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int calc(int a, int b){
	
int tiden;	
	
int c;	

tiden = time(0);

srand(tiden);

while(c > a or c < b){
	
c = (rand()%a) + b;
		
}

return c;

}
int main(int argc, char** argv) {
	
	
	
int a,b,c,d;




cout<<"skriv största möjliga heltal ";
cin>>a;
cout<<"skriv minsta möjliga heltal ";
cin>>b;	
	
	
calc(a,b);


cout<<calc(a,b);
	
	return 0;
}
