#include <iostream>

using namespace std;

int main()
{ 
    int n = 5; 
    int a[n][n];
    for (int l = 0; l < n; l++) 
    {  
        for (int i = 0; i <= l; i++) 
        { 
        if (l == i || i == 0) 
            a[l][i] = 1; 
        else
            a[l][i] = a[l - 1][i - 1] +  a[l - 1][i]; 
        cout << a[l][i] << " "; 
        } 
        cout << "\n"; 
    } 

}
