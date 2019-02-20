#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


int tal1, tal2, summa;

cout << "skriv dagens mätarställning ";

cin >> tal1;
cout << "skriv mätarställningen för ett år sedan";

cin >> tal2;

summa = tal1 - tal2;

cout << "din bil har gått " << summa <<" mil" ;


return 0;
}
