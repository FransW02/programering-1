#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

int tim, min, sec, a, b, c, d, e, f, min2, sec2, svar;

cout << "skriv din löpar tid på ditt första lopp";
cin >> a >> b >> c;

cout << "skriv din löpar tid på ditt andra lopp";
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



cout << "din tid är /n " << tim " timmar /n" << min2 " minuter /n" << sec2 " sekunder";

	return 0;
}
