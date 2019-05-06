#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	
	cout<<"Skriv"<<endl;
	string input;
	cin>>input;
	
	
	for(int i = 0; i <input.length(); i++) {
		
		
		if(input[i] == 'Z'){
				
		input[i] = 'a';

	}
		
		cout<<input[i];
	
	}
	
	
	
	
	
	return 0;
}
