#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv) {
	
int trys, a;	


cout << "skriv in pinkoden ";
cin >> a;
trys = 0;
	

 

while( a != 1123 and trys != 3 ) {
	
trys++;	
	
cout << "f�rs�k igen";
cin >> a;	


}	

	
if( trys == 3 )	{
	
cout << "Ditt kort �r nu sp�rrat! ";
	
}
	
if( a == 1123 )	{
	
cout << "Grattis, du f�r nu ta ut pengar!";
	
}	

	
	return 0;
}
