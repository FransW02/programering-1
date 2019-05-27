#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {

int a, svar1, svar2, svar3, svar4, svar5;

cout<<"skriv hur många timmar du har jobbad denna månad";
cin>> a;

if( a <= 160 ){
	
svar1 = a * 100;

cout<< "Din lön är "<< svar1;
	
} else {
	
svar2 = 100 * 160;
svar3 = a - 160;
svar4 = svar3 * 150;
svar5 = svar2 + svar4;	

cout<<"din lön är kr " << svar5;

}

	return 0;
}
