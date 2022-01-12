#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fib(int n)
{
    static int n1=0;
    static int n2=1;
    static int n3=0;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout << n3 <<' ';    
         fib(n-1); 
    }
}

int main()
{
    cout<< '0' <<' ' << '1'<<' ';
    fib(7);
    return 0;
}
