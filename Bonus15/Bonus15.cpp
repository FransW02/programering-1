#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int F(int grader){
	
int a;

	
a = (grader *1.8) + 32;
	
return a;	
	
}


int C(int grader){
	
int a;

	
a = (grader /1.8) - 32;
	
return a;	
	
	
	
}



int formelVal(int grader, string svar){
	
int a;
	
if(svar == "C"){
	
F(grader);
	
a = F(grader);
	
return a;	
	
}

if(svar == "F"){

C(grader);		
	
a = C(grader);	
	
return a;
	
}
	
	

	
	
}






int main(int argc, char** argv) {

int grader;
string svar;

cout<<"vill du konvertera från F eller från C?"<<endl;
cin>>svar;

cout<<"hur många grader är det"<<endl;
cin>>grader;


cout<<formelVal(grader,svar);



	return 0;
}
