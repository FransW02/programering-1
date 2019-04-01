#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {

int tal;

tal = -1;

bool increase;

while( tal <= 7 ){
	
tal++;	
increase = true;
cout<<tal<<endl;
	
	
if( tal == 7 ){
	
increase = false;	
	
}	

while( increase == false ){
	
	
tal--;	
	
cout<<tal<<endl;	

if(tal == 0 ){
	
return 0;
	
}
	
}
	
	
}


	
}
