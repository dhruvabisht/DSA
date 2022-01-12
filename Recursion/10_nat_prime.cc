#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int nat(int n, int i){
   if(n<2){
      return 0;
   }
   if (n == 2 || n==3){
      return 1;
   }
   if (n % i == 0){
      return 0;
   }
   if (i <= n/2){
      return 1;
   }
   

   return (nat(n, i+1));
}

int main()
{
    for(int i=2;i<10;i++)
    {
        if(nat(i,2)==1)
            cout << i <<' ';
    }
    return 0;
}
