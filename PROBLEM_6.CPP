#include<iostream>
using namespace std;
//Q : swapping using the third varieble.
int main()
{
    //let
    int x = 5;
    int y = 9;
    int swap;
    cout<<"before the swapping "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    //swaping is starts.

    swap = x;
    x = y;
    y = swap;

    cout<<"after the swapping "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;    

    return 0;
}