#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int ny, p;	

int array[7];

for(int i = 0; i < 7;i++){
	
cout<<"skriv " <<i<< " nummer ";
cin>>array[i];

	}

cout<<"skriv ett nytt nummer som ska in i arrayn ";
cin>>ny;

cout<<"Skriv vilken position som det nya nummeret ska vara "; 
cin>>p;


	


for(int b = 5; b >= 0;b--){


if(b == p){
	
	
array[b] = ny;	

cout<<array[b]<<endl;
}

if(b != p){
	


cout<<array[b]<<endl;



}
}





	return 0;
}
