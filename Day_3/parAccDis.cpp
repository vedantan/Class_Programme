#include<iostream>
using namespace std;

class Point{
    private:
    int xaxis;
    int yaxis;

    public:
    Point(){
        xaxis = -1;
        yaxis = -1;
    }

    Point(int x ,int y){
        xaxis = x ;
        yaxis = y;
    }

    void acceptPoint(){
        cout<<"Enter Xaxis and Yaxis"<<endl;
        cin>>xaxis>>yaxis;
        
    }

    void displayPoint(){
        cout<<xaxis<<" "<<yaxis<<endl;
    }

};

int main(){

    Point p;
    // p.acceptPoint();
    p.displayPoint();

    Point p1(3,4);
    // p1.acceptPoint();
    p1.displayPoint();

    return -1;
}