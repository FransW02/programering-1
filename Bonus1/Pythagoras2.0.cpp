#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <math.h>


using namespace std;



int main(int argc, char** argv) {
	
	float roten_ur;
	int A, B, B2, A2, E, E2;
	
	cout << "skriv l�ngden av kortsidan ";
	cin >> A;
	
	cout << "skriv l�ngden av basen ";
	cin >> B;
	
	A2 = A * A;
	B2 = B * B;
		
	E2 = B2 + A2;
	
	roten_ur = sqrt(E2);
	
	
	
	cout << "hypotenusan �r " << roten_ur;
		
	return 0;
}




