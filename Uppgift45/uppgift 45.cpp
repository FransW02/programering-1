#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		
int a,b,c,d,e,x;	


string svar;
	
	



srand(time(0));


a = rand()%6 + 1;
b = rand()%6 + 1;
c = rand()%6 + 1;
d = rand()%6 + 1;
e = rand()%6 + 1;
	
	
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;	
		

cout<<"vill du slå om något nummer?"<<endl;
cin>>svar;


if(svar == "ja"){
		
cout<<"vilket nummer vill du slå om 1-5"<<endl;
cin>>x;	
	
} else if(svar == "nej"){
	
	
return 0;	
	
}



if(x == 1){
srand(time(0));	

a  = rand()%6 + 1; 	
	
} else if(x == 2){
srand(time(0));	

b = rand()%6 + 1;	
	
} else if(x == 3){
srand(time(0));	

c = rand()%6 + 1;	
	
} else if(x == 4){
srand(time(0));

d = rand()%6 + 1;
	
} else if(x == 5){
srand(time(0));	

e = rand()%6 + 1;	
		
}






cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;





	return 0;
}
