#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

int tim, min, sec, a, b, c, d, e, f, min2, sec2, svar;

cout << "skriv din l�par tid p� ditt f�rsta lopp";
cin >> a >> b >> c;

cout << "skriv din l�par tid p� ditt andra lopp";
cin >> d >> e >> f;

tim = a + d;
min = b + e;
sec = c + f;


if( sec >= 60 ){
	
sec2 = sec % 60;
min++;
	
}

if( svar >= 60 ) {

min2 = min % 60;
tim++;

} 



cout << "din tid �r /n " << tim " timmar /n" << min2 " minuter /n" << sec2 " sekunder";

	return 0;
}
