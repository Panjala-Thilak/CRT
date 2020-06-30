#include<iostream>
using namespace std;
int main()
{
    int k,m;
    cin>>k;
    int arr[k+1];
    if(k==0)
    {
        arr[0]=1;
    }
    else
    {
        arr[0]=1;
        m=1;
        for(int i=1;i<=k;i++)
        {
            arr[i]=m*(k-i+1)/i;
            m=arr[i];
        }
    }
    for(int i=0;i<=k;i++)
    cout<<arr[i]<<" ";
    return 0;
}
