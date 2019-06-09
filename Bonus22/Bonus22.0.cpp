#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int Talsum(int n) {

if(n > 1){

return Talsum(n - 1) + Talsum(n - 2);
	
}

}

int main(int argc, char** argv) {

int n;

for(n = 0; n < 20; n++){
	
cout<<Talsum(n)<<endl;

}

	return 0;
}
