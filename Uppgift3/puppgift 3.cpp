#include <iostream>



using namespace std;

int main(int argc, char** argv) {


float tal1, tal2, tal3, tal4, summa1, summa2, summa3, summa4, summa5, summa6, summa7, summa8;

cout << " skriv hur mycket kilo producten väger ";
cin >> tal1;

cout << "skriv kilopriset på producten";
cin >> tal2;

summa1 = tal1 * tal2;

summa2 = summa1 * 1.12;

summa3 = summa2 - summa1;

cout << " skriv hur mycket kilo andra producten väger ";
cin >> tal3;

cout << "skriv kilopriset på andra producten";
cin >> tal4;

summa4 = tal3 * tal4;

summa5 = summa4 * 1.12;

summa6 = summa5 - summa4;

summa7 = summa1 + summa4;

summa8 = summa6 + summa3;

cout << " product 1 "<< summa1 << "kr" << endl;
cout << " prodict 2 "<< summa4 << "kr" << endl;
cout << " total " << summa7 << "kr" << endl;
cout << " moms " <<summa8 << "kr" << endl;

	return 0;

}
