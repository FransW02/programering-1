#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv) {
	

int array[5];
bool is_same = false;

	
for(int i = 0; i < 5; i++){
	
cout<<"skriv 5 heltal "<<endl;
cin>>array[i];


}
	

for(int i = 0; i < 5 ;i++){

		
		for(int y = 0; y < 5 ;y++){
		    		
				
				if( y != i){
						
						
						if(array[i] == array[y] ){
						
							
							
						cout<<" array "<<i<<" och "<<y<<" är samma ";	
						
						is_same = true;
						
						if(is_same == true){
	
						return 0;
	
 						}
						
						
							
							
						
							
						}
				}	
		}		
}	

if(is_same == false){
	
cout<<"inga nummer är lika";
}

	return 0;
}

