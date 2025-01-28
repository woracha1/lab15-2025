#include <iostream>
#include <algorithm>
using namespace std;

void sort(int x[]){
    std :: sort(x,x+5) ;
    std :: sort(x+5,x+10) ;
}

int main(){
    int data[] = {7,8,2,1,2,4,6,9,0,1};
    cout << "Before: " ;
    for(int i = 0; i < 10 ; i++){
        cout << data[i] << " " ;
    }
    cout << endl ;

    sort(data);
    cout << "After: " ;
    for(int i = 0; i < 10 ; i++){
        cout << data[i] << " " ;
    }

return 0 ;
}
