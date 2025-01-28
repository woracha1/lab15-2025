#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
    int money[4] = {50,100,500,1000} ;
    a = money[rand() % 4 ] ;
    b = money[rand() % 4 ] ;
    while(b==a) b = money[rand() % 4 ] ;
    c = money[rand() % 4 ] ;
    while(c==b || c==a) c = money[rand() % 4 ] ;
    d = money[rand() % 4 ] ;
    while(d==c || d==a || d==b) d = money[rand() % 4 ] ;
    
    
}