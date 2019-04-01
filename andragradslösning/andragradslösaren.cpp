#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include <math.h>

using namespace std;

int main(int argc, char** argv) {


float a, b, c, x, q, p, k, i, i2, xsym, y, a2, b2, xsym2;

cout<<"Skriv a, b och c ";
cin>>a;
cin>>b;
cin>>c;
	
x = a/a;
p = b/a;
q = c/a;	
	
	
	
	

k = pow( (p/2),2 ) -q;

if( k > 0){
	
cout<<"Den har 2 reela lösningar";
	
}else if(k == 0 ){
	
cout<<"Den har 1 reel lösning";
	
}else{
	
cout<<"Den har 0 reela lösningar";	
	
}



i = -(p/2) + sqrt( pow ((p/2),2)- q );
i2 = -(p/2) - sqrt( pow ((p/2),2) - q );



	
if( k > 0){
	
cout<<endl<<i<<endl<<i2;
	
}else if(k == 0 ){
	
cout<<endl<<i;
	
}else{
	
cout<<" Den har 0 reela lösningar";	
	
}

/* symetrilinje och sånt */


xsym = (i + i2) /2;

a2 = a * xsym;
b2 = b * xsym;
xsym2 = xsym * xsym;

y = (a * xsym2 ) + b2 + c;

if(a > 0){
	
	
cout<<" Det är en minimipunkt";	
cout<<endl<<" ("<<y<<","<<xsym<<")";
	
} else{

cout<<" Det är en maximipunkt";
cout<<endl<<" ("<<y<<","<<xsym<<")";
	
}




	return 0;
}
