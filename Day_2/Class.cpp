#include<iostream>
using namespace std;

class Time{
    // Data members
    private:
    int hrs;
    int mins;
    int secs;

    public:

    void displayTime(){
        cout<<"Time is "<<hrs<<":"<<mins<<":"<<secs<<endl;
    }

    void acceptTime(int hrs , int mins ,int secs){
        this->hrs = hrs;
        this->mins = mins;
        this->secs = secs;
    }

};

int main(){

    Time t;
    t.acceptTime(20,8,26);
    t.displayTime();




    return 0;
}