#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


int tal1, tal2, summa;

cout << "skriv dagens m�tarst�llning ";

cin >> tal1;
cout << "skriv m�tarst�llningen f�r ett �r sedan";

cin >> tal2;

summa = tal1 - tal2;

cout << "din bil har g�tt " << summa <<" mil" ;


return 0;
}
