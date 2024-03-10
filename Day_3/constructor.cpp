#include<iostream>
using namespace std;

class Cor{
    private:
    int xaxis;
    int yaxis;

    public:

    void init(){
        xaxis = 1;
        yaxis = 1;
    }

    void init(int x ,int y){
        xaxis = x;
        yaxis = y;
    }

    void display(){
        cout<<"Point :(" << xaxis << "," << yaxis<< ")"<<endl;
    }
};


int main(){

    Cor c;
    c.init();
    c.display();

    c.init(3,4);
    c.display();

    return -1;
}