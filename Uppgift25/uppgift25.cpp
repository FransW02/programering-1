#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {

int a[7], d;


for(int b = 0; b <=7 ; b++){
	
cout<<"skriv 7 heltal ";
cin>>a[b];

	
}

for(int c = 0; c < 7; c++){
	
d = d + a[c];

	
}


if(d < 50){
	
cout<<"summan av alla nummer är mindre än 50";

	
}else{
	

cout<<"summan av alla nummer är större än 50";	
	
}

	return 0;
}
