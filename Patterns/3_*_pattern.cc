#include<iostream>
using namespace std;
int main(){
    for(int i=4;i>=0;i--)
        {
            for(int k=5-i-1;k>=0;k--)
            {
                cout<<' ';
            }
            for(int j=0;j<=i;j++)
            {
                cout<<'*';
            }
            cout<<'\n';
        }
    return 0;
}


