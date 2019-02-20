#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

int a, b, c;


cout<< "skriv tre tal "<< endl;
cin>> a;
cin>> b;
cin>> c;



if( a > b and a > c ) {
	
cout<< "Det första talet är störst";
	
}

if( b > a and b > c ) {
	
cout<< "det andra talet är störst";
	
}

if( c > a and c > b ) {
	
cout<< "det tredje talet är störst";
	
}

	return 0;
}
