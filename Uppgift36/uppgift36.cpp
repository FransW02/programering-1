#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

string ABBA(string output,string input1,string input2){
	
output = input1 + input2 + input2 + input1;

	
return output;
	
}

int main(int argc, char** argv) {
	

string input1;
string input2;
string abba;
string ord;
	
cout<<"skriv 2 ord";
cin>>input1;
cin>>input2;

ord = ABBA(abba,input1,input2);

cout<<ord;
	
	return 0;
}
