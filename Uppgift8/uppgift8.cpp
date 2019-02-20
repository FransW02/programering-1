#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	
float a, b, svar;	
	
cout << "skriv nuvrande årtal ";
cin >> a;
cout << "skriv bilens årsmodel ";
cin >> b;

svar = a - b;

if( svar < 5 ) {
	
cout << "du borde ha en helförsäkning på din bil";

} /*else {
	
cout << "du borde ha en halvförskning på din bil";
	
}
*/	
if( svar > 5 and svar < 25) {
	
cout << "du borde ha en halvförskning på din bil";
	
}

if( svar > 25) {
	
cout << "du borde ha en veternförsäkning på din bil";
	
}	
	
	


	return 0;
}
