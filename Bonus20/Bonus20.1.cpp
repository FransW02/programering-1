#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {


string x;
		
int a,b,c,d,e;	


string svar;
	
	



srand(time(0));


a = rand()%6 + 1;
b = rand()%6 + 1;
c = rand()%6 + 1;
d = rand()%6 + 1;
e = rand()%6 + 1;
	
	
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;	
		

cout<<"vill du sl� om n�got nummer?"<<endl;
cin>>svar;


if(svar == "ja"){
		
cout<<"vilka nummer vill du sl� om 1-5"<<endl;
cin>>x;	
	
} else if(svar == "nej"){
	
	
return 0;	
	
}

for(int i = 0; i < 6;i++){


if(x[i] == '1'){


a  = rand()%6 + 1; 	
	
}

if(x[i] == '2'){
	

b = rand()%6 + 1;	
	
}

if(x[i] == '3'){
	

c = rand()%6 + 1;	
	
}

if(x[i] == '4'){


d = rand()%6 + 1;
	
}

if(x[i] == '5'){
	

e = rand()%6 + 1;	
		
}

}


cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;





	return 0;
}
