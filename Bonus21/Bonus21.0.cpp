#include <iostream>

using namespace std;

int Talsum(int a) {

int b;

if(a == 1) {
	
b = 1;

} else {
	
	
b = a * Talsum(a -1);	
	
}
	


	
return b;	
		
	
}
	
int main(int argc, char** argv) {

int a;
	
cout << "skriv in ett nummer" <<endl;
cin >> a;
	
cout << Talsum(a);
	
return 0;
}
