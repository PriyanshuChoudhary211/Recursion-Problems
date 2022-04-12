#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n , int index)
{
    if(n==0)
    return;
    if(index == n-1)
    {
        return selectionSort(arr,n-1,0);
    }
    if(arr[index]>=arr[index+1])
    {
        swap(arr[index],arr[index+1]);
        return selectionSort(arr,n,index+1);
    }
    else
    {
        return selectionSort(arr,n,index+1);
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++ )
      cin>>arr[i];
    
    selectionSort(arr,n,0);

     for(int i = 0 ; i < n ; i++ )
      cout<<arr[i]<<" ";
}