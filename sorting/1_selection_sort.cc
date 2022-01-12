#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={9,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<10;i++)
    {
        int min = a[i];
        int idx = i;
        for(int j=i+1;j<10;j++)
        {
            if(a[j]<min)
            {
                idx= j;
                min = a[j];
            }
        }
        swap(a[idx],a[i]);
    }
    for(int i=0;i<10;i++)
        cout << a[i];
    return 0;
}
