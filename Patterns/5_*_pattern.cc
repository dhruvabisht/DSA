
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++)
        {
            for(int k=5-i-1;k>=0;k--)
            {
                cout<<' ';
            }
            for(int j=0;j<=i;j++)
            {
                cout<<'*';
            }
            for(int z=1;z<=i;z++)
            {
                cout<<'*';
            }
            cout<<'\n';
        }
        for(int i=3;i>=0;i--)
        {
            cout<<' ';
            for(int k=4-i-1;k>=0;k--)
                cout<<' ';
            for(int j=0;j<=i;j++)
                cout<<'*';
            for(int z=1;z<=i;z++)
                cout<<'*';
            cout<<'\n';
        }
    return 0;
}
