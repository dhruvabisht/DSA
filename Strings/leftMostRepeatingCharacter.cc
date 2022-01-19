#include<iostream>
using namespace std;
int leftMostRepeating(string str)
{
    int i;
    int count[256] = {0};
    int len = str.length();
    for(i=0;i<len;i++)
        count[str[i]]++;
    for(i=0;i<len; i++)
    {
        if(count[str[i]] > 1)
            return i;
    }
    return -1;
}
int main()
{
    string str;
    cin>>str;
    int n = leftMostRepeating(str);
    if(n != -1)
        cout<<"Character repeating is : " << str[n];
    else
        cout<<"No repeating Character found";
    return 0;
}
