#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of digits\n";
    cin>>a;
    int x=a-1;
    float b[x],c[x],d=0.0,v;
    cout<<"Enter the numbers:\n";
    for (int i=0;i<=x;i++)
    {
        cin>>b[i];
    }
    for (int j=0;j<=x;j++)
    {
        c[j]= b[j]*b[j];
    }
    for (int k =0;k<=x;k++)
    {
        d = d + c[k];
    }
    d = d/a;
    cout<<d;
    v=0.5*d;
    cout<<"\nThe Root Mean Square of the given value is:"<<v;
}
