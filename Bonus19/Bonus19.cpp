#include <iostream>

using namespace std;


int whilemax (int tal) {

int input;

cout << "skriv in ett heltal " <<endl;

cin >> input;

while (input > tal) {

cout << "skriv in ett heltal " <<endl;

cin >> input;

}

}

int main(int argc, char** argv) {

int a = 20;

whilemax(a);


return 0;
}
