#include<iostream>
using namespace std;

void add(int n , int m){
    cout<<"Enter n :- "<<endl;
    cin>>n;
    cout<<"Enter m :- "<<endl;
    cin>>m;

    int res = n + m;
    cout<<res<<endl;

}

int main(){

    add(4,6);
    return 0;
}