
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<"is a maximum number"<<endl;
        cout<<b<<"is a minimum number"<<endl;
    }
    else
    {
        cout<<a<<"is minimum number"<<endl;
        cout<<b<<"is maximum number"<<endl;
    }
    return 0;
}
