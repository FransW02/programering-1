#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



using namespace std;
int main(int argc, char** argv) {

int a,c;

int tiden = time(0);


srand(tiden);

	
c = rand()%100 + 1;


cout<<"Gissa p� ett nummer mellan 1-100"<<endl;
cin>>a;

for(int i = 4; i > 0;i--){


if(a < c){
	
	
cout<<"Du gissade f�r l�gt"<<endl;	
	
}

if(a > c){
		
cout<<"Du gissade f�r h�gt"<<endl;	
	
}


if(a == c){
	
cout<<"Du gissade r�tt";
		
return 0;	
}

	
cout<<"du har "<<i<<" f�rs�k kvar"<<endl;
cin>>a;

}


cout<<"Gamer Over";

	return 0;
}
