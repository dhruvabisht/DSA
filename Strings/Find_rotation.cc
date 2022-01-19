#include<iostream>
using namespace std;
int findRotation(string s1, string s2)
{
    int i;
    s1 = s1 + s1;
    if(s1.find(s2))
        return 1;
    else
        return 0;
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(findRotation(s1,s2))
        cout<<"Found Roatation";
    else
        cout<<"Rotation not Found";
    
    return 0;
}
