#include<bits/stdc++.h> //all the libs are included in this 
using namespace std;

int main(){
    int day;
    cout<<"Enter day:";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Sunday"<<"\n";
        break;

    case 2:
        cout<<"Monday"<<"\n";
        break;    
    
    case 3:
        cout<<"Tuesday"<<"\n";
        break;    

    case 4:
        cout<<"Wednesday"<<"\n";
        break;    

    case 5:
        cout<<"Thurday"<<"\n";
        break;    
    
    case 6:
        cout<<"Friday"<<"\n";
        break;    

    case 7:
        cout<<"Saturay"<<"\n";
        break;    

    default:
        break;
    }



    int x = 1;
    int y = 1;

    switch (x) {
        case 1:
            cout << "x is 1." << endl;
            switch (y) {
                case 1:
                    cout << "y is 1." << endl;
                    break;
                default:
                    cout << "y is not 1." << endl;
            }
            break;
        default:
            cout << "x is not 1." << endl;
    }
}