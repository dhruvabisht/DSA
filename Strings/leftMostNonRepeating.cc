#include<iostream>
#include<math.h>
using namespace std;
#define INT_MAX 2147483647
int leftMostNonRepeating(string str)
{
    int i;
    int count[256] = {0};
    int temp = INT_MAX;
    int len = str.length();
    for(i=0;i<len;i++)
        count[i] = -1;
    for(i=0;i<len; i++)
    {
        if(count[str[i]] == -1)
            count[str[i]] = i;
        else
            count[str[i]] = -2;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]>0)
            temp = min(temp, count[i]);
    }
    return (temp == INT_MAX)?-1:temp;
}
int main()
{
    string str;
    cin>>str;
    int n = leftMostNonRepeating(str);
    if(n != -1)
        cout<<"Character repeating is : " << str[n];
    else
        cout<<"No non repeating Character found";
    return 0;
}
