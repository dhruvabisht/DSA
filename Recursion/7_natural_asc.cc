#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nat(int n, int i)
{
    if(n == i)
    {
        cout << n;
    }
    else
    {
        cout<< i <<' ';
        nat(n, i+1);
    }
}

int main()
{
    nat(10,1);
    return 0;
}
