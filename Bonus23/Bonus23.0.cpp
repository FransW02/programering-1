#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//mellan 32503 - 32507 slutar funka om är primtal
//över 64000 slutar funka om inte är primtal
using namespace std;

int c = 1;


int calc(int n, int a){






if(a != n and n != 1){


	
if(a %n == 0){

c = 2;	

cout<<a<<" är inte ett primtal";
	
return 0;	

}	
}



int b;

if(n == 1) {
	
b = 1;

} else {
	
	
n = calc(n - 1,a);
			
}


	
	
}
int main(int argc, char** argv) {
	
int n;
int a;



cout<<"skriv ett nummer mellan 1 - 1000000"<<endl;
cin>>n;	

a = n;

calc(n,a);		


if(c == 1){



cout<<a<<" är ett primtal";
}

	

	
	
	return 0;
} 
