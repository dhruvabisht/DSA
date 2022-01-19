#include<iostream>
using namespace std;
int FindAnagram(string txt, string ptr)
{
    int i;
    intcountT[256] = {0};
    intcountP[256] = {0};
    
    for(i=0;i<ptr.length();i++)
    {
        intcountP[ptr[i]]++;
        intcountT[txt[i]]++;
    }
    for(i=ptr.length();i<=txt.length();i++)
    {
        if(isCountSame(intcountT, intcountP))
        {
            return 1;
        }
        intcountT[txt[i]]++;
        intcountT[txt[i-ptr.length()]]--;
        
    }
}
int isCountSame(int intcountT, int intcountP)
{
    int i;
    for(i=0;i<256;i++)
    {
        if(intcountT[i] != intcountP[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string txt;
    string ptr;
    cin>>txt;
    cin>>ptr;
    if(FindAnagram(txt, ptr) == 1)
        cout<<"is Anagram";
    else
        cout<<"is not anagram";
    return 0;
    
}
