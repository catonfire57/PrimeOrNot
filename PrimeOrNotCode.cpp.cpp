#include<iostream>
#include<windows.h>
using namespace std;
int i;
int main()
{
    cout<<"Enter the Number(n) >  ";
    int n;
    cin>>n;
    for (i=2;i<n;i++) {
        if (n%i==0) {
            cout<<"non prime"<<endl;
            Sleep(2000);
            break;
        }
    }
    if (i==n) {
        cout<<"prime"<<endl;
        Sleep(2000);
    }
    
    return 0;
}