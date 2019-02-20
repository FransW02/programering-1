#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {

int a, svar, m, b;


cout << "skriv in något av det första 12 heltalen";
cin >> a;



m = -1;


while( a < 1 or a > 12 ){
	
cout << "det är inte ett tal mellan 0 och 12 ";
cin >> a;
}

while( m < 12 ){

m++;
svar = a * m;
cout <<endl << m <<" x " << a << " = "<< svar;

}





	return 0;
}
