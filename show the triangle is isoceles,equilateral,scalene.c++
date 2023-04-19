
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;                                //a=side_a, b=side_b,c=side_C
    cout<<"enter the sides a b c: "<<endl;
    cin>>a>>b>>c;
    
    if (a==b && b==c)
    {
        cout<<"the triangle is equilateral";
    }
    else if (a==b || b==c || a==c)
    {
        cout<<"the triangle is isoceles";
    }
    else
    {
        cout<<"the triangle is scalene";
    }
    return 0;
}



