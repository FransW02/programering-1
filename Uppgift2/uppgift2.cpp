#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


int tal1, tal2, tal3, summa1, summa2;

cout << "skriv dagens m�tarst�llning ";

cin >> tal1;
cout << "skriv m�tarst�llningen f�r ett �r sedan";

cin >> tal2;

summa1 = tal1 - tal2;

cout << "skriv i liter din bensinsf�rbruking";

cin >> tal3;

summa2 = summa1 / tal3;

cout << "din bil har g�tt " << summa1 << "mil" << endl << "din bil har anv�nt "<< tal3 << "liter bensin " << endl << "Din bil har anv�nt " << summa2 << " liter per mil";


return 0;
}
