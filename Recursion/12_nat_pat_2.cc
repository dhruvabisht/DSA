#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void npat(int n, int i){
    if(n>=i)
    {
        cout<<" + "<< pow(2,i);
        npat(n,i+1);
    }
}

int main()
{
    cout<<"1";
    npat(10, 2);
    return 0;
}
//1 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024
