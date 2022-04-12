#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n,int index)
{
    if(n==0)
    return;
    if(index == n-1)
    {
        bubbleSort(arr,n-1,0);
    }
    else if(arr[index]>arr[index+1])
    {
        swap(arr[index+1],arr[index]);
        bubbleSort(arr,n,index+1);
    }
    else{
        return bubbleSort(arr,n,index+1);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
     bubbleSort(arr,n,0);
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}