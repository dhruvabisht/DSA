#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nat(int n, int i)
{
    if(i>n)
    {
        if(n/2 == 0)
            cout << n;
    }
    else
    {
        cout<< i <<' ';
        nat(n, i+2);
    }
}

int main()
{
    nat(10,1);
    return 0;
}
