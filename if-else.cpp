#include<bits/stdc++.h> 
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;

    if(age>18){
        cout<<"You are adult";
    }
    else if (age<=18 && age>0)
    {
        cout<<"You are a kid";
    }
    else{
        cout<<"Please enter valid age";
    }
    return 0;
    
   
}