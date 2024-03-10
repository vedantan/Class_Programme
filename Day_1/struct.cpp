#include<iostream>
using namespace std;

struct Time {
    int min;
    int hours;
void accepttime(int min , int hours){
    this->min = min;
    this->hours = hours;
}

void displaytime(){
    cout<<"mins is ->"<<min<<endl;
    cout<<"hours is ->"<<hours<<endl;
}

};


int main(){

    Time t;
    t.accepttime(3,6);
    t.displaytime();

    return 0;
}