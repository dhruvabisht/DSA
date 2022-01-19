#include<iostream>
using namespace std;
void Insertion(int arr[])
{
    int n = 10;
    int i;
    for(i=0;i<n;i++)
    {
        int temp = arr[i];
        int j=i-1;
        while(j<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    cout<<"\nAfter sorting";
    for(int i=0;i<10;i++)
        cout<<"     "<<arr[i] <<"    ";
}
int main()
{
    int arr[10] = {54,73,2,34,67,8,0,42,5,67};
    cout<<"\nBefore sorting";
    for(int i=0;i<10;i++)
        cout<<"     "<<arr[i] <<"    ";
    
    Insertion(arr);
    
    return 0;
}
