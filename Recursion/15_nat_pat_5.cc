#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void npat(int n, int i){
    if(n>=i)
    {
        cout<<i<<"^" <<i <<" + ";
        npat(n,i+1);
    }
}

int main()
{
    npat(10,1);
    return 0;
}
//1^1 + 2^2 + 3^3 + 4^4 + 5^5 + 6^6 + 7^7 + 8^8 + 9^9 + 10^10 + 
