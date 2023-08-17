#include <iostream>
using namespace std;

inline int cube(int a){
    return a*a*a;
}

int main(){
    cout<<"The cube of 3 is: "<<cube(4)<<endl;
}