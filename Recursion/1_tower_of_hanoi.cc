#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if(n==0)
        return;
    else
    {
        toh(n-1,a,c,b);
        cout<< a << " to "<<b<<'\n';
        toh(n-1,c,b,a);
    }
}

int main()
{
    toh(3,'A','B','C');
    return 0;
}
