#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void npat(int n, int i){
    if(n>=i)
    {
        cout<<" + "<< 1 <<'/' << i;
        npat(n,i+2);
    }
}

int main()
{
    cout<<"1";
    npat(10, 2);
    return 0;
}
//1 + 1/2 + 1/4 + 1/6..
