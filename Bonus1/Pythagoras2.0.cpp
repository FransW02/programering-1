#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <math.h>


using namespace std;



int main(int argc, char** argv) {
	
	float roten_ur;
	int A, B, B2, A2, E, E2;
	
	cout << "skriv längden av kortsidan ";
	cin >> A;
	
	cout << "skriv längden av basen ";
	cin >> B;
	
	A2 = A * A;
	B2 = B * B;
		
	E2 = B2 + A2;
	
	roten_ur = sqrt(E2);
	
	
	
	cout << "hypotenusan är " << roten_ur;
		
	return 0;
}




