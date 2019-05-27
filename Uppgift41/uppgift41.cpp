#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int calc(int a, int b, int c, int tiden){
	
	

tiden = time(0);

srand(tiden);

while(c > a or c < b){
	
c = (rand()%a) + b;
		
}

return c;

}








int main(int argc, char** argv) {
	
	
	
int a,b,c;




cout<<"skriv största möjliga heltal ";
cin>>a;
cout<<"skriv minsta möjliga heltal ";
cin>>b;	
	
	
c = calc(a,b,c);
	
	return 0;
}
