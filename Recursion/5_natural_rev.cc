#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nat(int n)
{
    if(n == 1)
    {
        cout << "1";
    }
    else
    {
        cout<< n <<' ';
        nat(n-1);
    }
}

int main()
{
    nat(10);
    return 0;
}
