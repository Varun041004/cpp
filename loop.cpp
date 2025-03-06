#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    for (int i = 1; i < 6; i++)
    {
        cout<<"This is "<<i<<"th iteration"<<"\n";
    }

    for (int i = 1; i <= 25; i += 5) {
        cout << "i = " << i << endl;
    }

    //while loop
    int n=5;
    int fact=1;

    while(n>0){
        fact *=n;
        n--;
    }
    cout<<"factorial is: "<<fact;



    return 0;
    
}