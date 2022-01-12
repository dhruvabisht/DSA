#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void npat(int n, int i){
    if(n>=i)
    {
        cout<<" + "<< pow(3,i);
        npat(n,i+1);
    }
}

int main()
{
    cout<<"1 + 3";
    npat(10, 2);
    return 0;
}
//1 + 3 + 9 + 27 + 81 + 243 + 729 + 2187 + 6561 + 19683 + 59049
