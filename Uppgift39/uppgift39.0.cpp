#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




using namespace std;
int main(int argc, char** argv) {

int a,b;

int tiden = time(0);

srand(tiden);


a = rand() %10 + 1;
b = rand() %10 + 1;




if(a > b){
	
cout<<a<<endl<<b;
	
}else if(b > a){
	
	
cout<<b<<endl<<a;	
	
}else if(b = a){
	
cout<<a<<endl<<b;	
	
}


	return 0;
}
