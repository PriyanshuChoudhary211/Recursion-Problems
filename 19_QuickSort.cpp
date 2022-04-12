#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l,j = r;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)
        swap(arr[i],arr[j]);       
      }while(i<=j);
      swap(arr[l],arr[j]);
      return j;
}
void quickSort(int arr[],int l,int r)
{
    int j;
    if(l<r)
     {
         j = partition(arr,l,r);
         quickSort(arr,l,j);
         quickSort(arr,j+1,r);
     }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
    
    quickSort(arr,0,n);

    for(int i=0 ; i<n;i++)
    cout<<arr[i]<<" ";
}