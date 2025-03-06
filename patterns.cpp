#include<bits/stdc++.h> 
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }

    cout<<"\n";

    for(int i=1;i<=5;i++){
        for (int j = 1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<"\n";   
    }

    cout<<"\n";

    for(int i=0;i<=5;i++){
        for (int j = 5; j>i; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }


}