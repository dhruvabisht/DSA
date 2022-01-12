#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
    {
        return fib(n-1) + fib(n-2) + 1;
    }
}

int main()
{
    cout<<fib(5);
    return 0;
}
