#include<iostream>
using namespace std;

void defaultArgument(int a, int b ,int c=0, int d=0){
    int sum = a+b+c+d;
    cout<<"sum of the numbers is:- "<<sum<<endl;
}

int main(){

    defaultArgument(2,4);
    
    defaultArgument(3,4,6);
    defaultArgument(2,6,8,4);


    return -1;
}