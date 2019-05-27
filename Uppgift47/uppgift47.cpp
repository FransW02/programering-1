#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;



struct boll{
	
int radius;
string color;
int weight;	
	
	
};



int main(int argc, char** argv) {

int radie,vikt;
string farg;


cout<<"skriv in radie, färg och vikt av en boll"<<endl;
cin>>radie;
cin>>farg;
cin>>vikt;
cout<<endl;

boll boll1 = {radie ,farg, vikt};

boll boll2 = {radie,farg,vikt};


boll2.radius = radie * 2;
boll2.weight = vikt + 8;

cout<<"Boll 1:"<<endl;
cout<<"radie: "<<boll1.radius<<endl;
cout<<"färg: "<<boll1.color<<endl;
cout<<"vikt: "<<boll1.weight<<endl;

cout<<"Boll 2:"<<endl;
cout<<"radie: "<<boll2.radius<<endl;
cout<<"färg: "<<boll2.color<<endl;
cout<<"vikt: "<<boll2.weight<<endl;




	return 0;
}
