#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void npat(int n, int i){
    if(n>=i)
    {
        cout<<" + "<< "1" <<"/"<<pow(3,i);
        npat(n,i+1);
    }
}

int main()
{
    cout<<"1 + 1/3";
    npat(10, 2);
    return 0;
}
//1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 + 1/729 + 1/2187 + 1/6561 + 1/19683 + 1/59049
