#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {



int kontroll;

bool is_ten;

cout<<"skriv in ett tal ";
cin>>kontroll;

if(kontroll == 10){
	
is_ten = true;	
	
} else{
	
is_ten = false;
	
}

if( is_ten == true){
	
	
cout<<"du skrev 10";	
	
} else{
	
cout<<"du skerv inte 10";	
	
}


	return 0;
}
