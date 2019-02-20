#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {

int a, svar1, stop, hopp;



cout << "skriv ett tal mellan 10 - 20 ";
cin >> a;

cout << "skriv hur stort hopp det ska vara mellan varje tal ";
cin >> hopp;

cout << "skriv hur långt ner programet ska räkna ";
cin >> stop;

stop = stop + hopp;

while( a > stop ){
	
a = a - hopp;

cout << endl << a;


}




	return 0;
}
