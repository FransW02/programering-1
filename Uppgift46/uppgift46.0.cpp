    
#include <iostream>

using namespace std;

int Talsum(int sum) {

if(sum != 0) {
sum = sum + Talsum(sum-1);
}
	
return sum;
}

int main(int argc, char** argv) {

int a;
	
cout << "skriv in ett nummer" <<endl;
cin >> a;
	
cout << Talsum(a);
	
return 0;
}
