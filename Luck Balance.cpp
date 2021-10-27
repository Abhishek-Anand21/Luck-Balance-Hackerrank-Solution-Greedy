#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i,j,n,k,diff=0;
    long int count=0,sum=0,add=0;
    cin>>n>>k;
    long int arr[n][2],arr1[n];
    for(i=0;i<n;i++)
    { 
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i][1]==1)
            arr1[i] = arr[i][0];
        else
        {
            sum = sum + arr[i][0];
            arr1[i] = 0;
        }
    }
    sort(arr1,arr1+n,greater <int>());
    for(i=0;i<k;i++)
     add = add+arr1[i];
    for(i=k;i<n;i++)
     diff = diff + arr1[i];
    cout<<add+sum-diff;
    return 0;
}
