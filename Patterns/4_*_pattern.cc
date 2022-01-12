
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
            for(int j=1;j<=i;j++)
            {
                cout<<'*';
            }
            cout<<'\n';
        }
    return 0;
}
