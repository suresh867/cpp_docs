#include <iostream>
using namespace std;

int override(int a){
    return a+a;
}

float override(double b){
    return b*b;
}

int main(){
    cout<<"4 + 4 is : "<<override(4)<<endl;
    cout<<"4 + 4 is : "<<override(5)<<endl;
    cout<<"4.3 * 4.3 is : "<<override(4.3)<<endl;
    cout<<"4.3 * 4.3 is : "<<override(4.6);
    return 0;
}