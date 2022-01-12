#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={9,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<10-1;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]); 
            }
        }
    }
    for(int i=0;i<10;i++)
        cout << a[i];
    return 0;
}
