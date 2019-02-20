#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {



int a, stop, hopp;


cout << "skriv ett tal mellan 10 - 20 ";
cin >> a;

cout << "skriv hur stort hopp det ska vara mellan varje tal ";
cin >> hopp;

cout << "skriv hur långt ner programet ska räkna ";
cin >> stop;



for( int x = a; x > stop; x = x - hopp){
	
cout << endl << x;	
	
}


	return 0;
}
