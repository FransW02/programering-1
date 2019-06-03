#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



using namespace std;
int main(int argc, char** argv) {

bool cool = true;

int f = 0;
int e = 99;
int x = 1;
int y = 100;


while(cool == true){

int a,b,c;

int tiden = time(0);


srand(tiden);



	
c = rand()%100 + 1;
b = rand()%100 + 1;



cout<<"Gissa på ett nummer mellan 1-100"<<endl;
cin>>a;

for(int i = 4; i > 0;i--){




if(a < c){
		
cout<<"Du gissade för lågt"<<endl;	
f = a;	
	
}

if(a > c){
		
cout<<"Du gissade för högt"<<endl;		
e = a;
	
}


if(a == c){
	
cout<<"Du gissade rätt";
		
return 0;	
}



if(f > x and y > e){
	
b = rand()%y + f;
cout<<b;
cout<<y<<" "<<f;	
	
}
if(f > x and e > y)	{
	
b = rand()%e + f;
cout<<b;
cout<<e<<" "<<f;	
}
if(x > f and y > e){
	
b = rand()%y + x;
cout<<b;	
cout<<y<<" "<<x;	
}
if(x > f and e > y){
	
b = rand()%e + x;	
cout<<b;	
cout<<e<<" "<<f;	
}



cout<<"AI:n gissade på "<<b<<endl;


if(b < c){
	
	
cout<<"AI:n gissade för lågt"<<endl;	
x = b;
	
}


if(b > c){
		
cout<<"AI:n gissade för högt"<<endl;	
y = b;
	
}

if(b == c){
	
cout<<"AI:n gissade rätt";
		
return 0;	
}
	
cout<<"du har "<<i<<" försök kvar"<<endl;
cin>>a;

}


string input;

cout<<"Vill du avsluta programmet"<<endl;
cin>>input;

if(input == "ja"){
	
cool = false;	

}

if(input == "nej"){
	
cool = true;	

}

}
	return 0;

}
