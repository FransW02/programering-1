#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {

float a, b, svar1, svar2;

cout << "skriv in ett tal";
cin >> a;
cout << "skriv in ett till tal";
cin >> b;

svar1 = a - b;
svar2 = b - a;

if( a == b ){
	
cout<< "Grattis!";

} else if ( svar1 > 0 and svar2 > 0 and svar2 or svar1 <= 10 ){
	
cout << "Close but no cigar!";
	
} else {
	
cout << "Not even close!";
	
}



	return 0;
}
