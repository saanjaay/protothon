/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float a,b;
    int c;
    cout<<"\nEnter the two numbers :";
    cin>>a;
    cin>>b;
    if (b==0)
        {
            cout<<"You have entered invalid digitsx";
        }
    else
    {
    cout<<"Enter the action to be performed: \n 1.add \n 2.subtract \n 3.multiply \n 4. divide";
    cin>>c;
    switch (c)
    {
        case 1 :
        cout<<"The addition is"<<a+b;
        break;
        case 2 :
        cout<<"The subtraction is"<<a-b;
        break;
        case 3 :
        cout<<"The multiplication is"<<a*b;
        break;
        case 4 :
        cout<<"The division is"<<a/b;
        break;
        default :
        cout<<"wrong option";
    }
    }
}
