#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {
int a,b,c;




cout<<"skriv st�rsta m�jliga heltal ";
cin>>a;
cout<<"skriv minsta m�jliga heltal ";
cin>>b;



int tiden = time(0);

srand(tiden);

while(c > a or c < b){
	
c = (rand()%a) + b;
		
}

cout<<c;



	
	
	return 0;
}
