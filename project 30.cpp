#include <iostream>
using namespace std;
int main() {
 int num;
    cout<<"enter number:";
    cin>>num;

    if(num>0){
            if(num%2==0)
        cout<<num<<" number is positive and even";
        else
            cout<<num<<"number is positive and odd";
    }
    else if(num<0){
        if(num%2==0)
        cout<<num<<" number is negative and even";
        else
            cout<<num<<"number is negative and odd";
    }
    else {
        cout<<" number is  zero";
    }
    return 0;
}	

