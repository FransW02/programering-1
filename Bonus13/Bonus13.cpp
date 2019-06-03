#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

bool gamer;

int nr[10];

int e = 0;

cout<<"skriv in 10 nummer"<<endl;

for(int i = 0; i < 10;i++){

cin>>nr[i];

}

int a = -1;

for(int i = 1; i < 10;i++){
	
a++;

		
if(nr[a] == nr[i]){

e = e - 2;
	
}

if(nr[a] < nr[i]){
	
gamer = true;	
	
}	
	
if(nr[a] > nr[i]){

gamer = false;
	
}

if(gamer == true){
	
e++;
	
	
}


if(gamer == false){
	
e = e + 2;

	
}


	
}



if(e == 9){
	
cout<<"numerna ökade bara";	
	
}


if(e > 1 and e < 18 and e != 9){
	
cout<<"numerna skönk och ökade";
	
}
	

if(e == 18){
	
cout<<"numerna skunker bara";	
	
}

if(e == 0){
	
cout<<"alla nummer var samma";	
	
}



	return 0;
}
