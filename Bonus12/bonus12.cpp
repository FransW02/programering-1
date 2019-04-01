#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

int ny, p;	

int array[7];	
	
for(int i = 0; i < 7;i++){
	
cout<<"skriv 7 nummer ";
cin>>array[i];
	
	}
	
cout<<"skriv ett nytt nummer som ska in i arrayn ";
cin>>ny;

cout<<"Skriv vilken position som det nya nummeret ska vara "; 
cin>>p;


for(int b = 0; b < 7;b++){
	

if(b == p){
	
cout<<ny<<endl;	
	
}	
	
if( b == 0 ){
	
cout<<array[6]<<endl;
	
}	

if( b != p){

	
cout<<array[b]<<endl;	
}

}


	
	return 0;
}
