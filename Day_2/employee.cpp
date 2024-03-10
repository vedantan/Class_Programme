#include<iostream>
using namespace std;

class Employee {
    // data member
    private:
    int empid;
    string name;
    int salary;

    // member function
    public:
    void acceptemployee(){
        cout<<"enter Employee id: "<<endl;
        cin>>empid;
        cout<<"enter Employee name: "<<endl;
        cin>>name;
        cout<<"enter Employee salary: "<<endl;
        cin>>salary;
    }

    void displayemployee(){
        cout<<"Empid of employee is: "<<empid<<endl;
        cout<<"Name of employee is: "<<name<<endl;
        cout<<"salary of employee is: "<<salary<<endl;

    }
};

int main(){

    Employee e;
    e.acceptemployee();
    e.displayemployee();

    return 0;
}