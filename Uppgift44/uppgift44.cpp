#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int a,b,c,d,e;	
	
int tiden = time(0);


srand(tiden);


int yatzzy[4];

a = rand()%6 + 1;
b = rand()%6 + 1;
c = rand()%6 + 1;
d = rand()%6 + 1;
e = rand()%6 + 1;


cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;



	return 0;
}
