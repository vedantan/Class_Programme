#include<iostream>
using namespace std;

class Calci {
    
    private:
    int a;
    int b;

    public:

    void add(){
        cout<<"Enter 1st no"<<endl;
        cin>>a;
        cout<<"Enter 2nd no"<<endl;
        cin>>b;
    
        int sum = a+b;
        cout<<"sum of 2 number is:- "<<sum<<endl;
    }

    void sub(){
        cout<<"Enter 1st no"<<endl;
        cin>>a;
        cout<<"Enter 2nd no"<<endl;
        cin>>b;

        int sub = a-b;
        cout<<"substraction of 2 number is:- "<<sub<<endl;
    }

    void mul(){
        cout<<"Enter 1st no"<<endl;
        cin>>a;
        cout<<"Enter 2nd no"<<endl;
        cin>>b;

        int mul = a*b;
        cout<<"multiplication of 2 number is:- "<<mul<<endl;
    }

    void div(){
        cout<<"Enter 1st no"<<endl;
        cin>>a;
        cout<<"Enter 2nd no"<<endl;
        cin>>b;

        int div = a/b;
        cout<<"division of 2 number is:- "<<div<<endl;
    }




};


int main(){

    Calci c;
    int choice;
    // cout<<"enter your choice"<<endl;


    do{
         cout<<"Press 0 for exit"<<endl;
         cout<<"Press 1 for addition"<<endl;
         cout<<"Press 2 for substraction"<<endl;
         cout<<"Press 3 for multiplication"<<endl;
         cout<<"Press 4 for division"<<endl;
             cin>>choice;

        switch (choice)
        {
        case 0 :
            cout<<"Thank-You"<<endl;
            break;
        case 1 :
            c.add();
            break;
        case 2 :
            c.sub();
            break;
        case 3 :
            c.mul();
            break;            
        case 4 :
            c.div();
            break;
        
        default:
            cout<<"Please enter a valid number"<<endl;
            break;
        }

    }while (choice != 0);
    
    


    return -1;
}