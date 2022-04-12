#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l , int m, int h)
{
    int i = l,j = m+1,k =l;
    int b[100];
    while(i<=m && j<=h)
    {
        if(arr[i]<arr[j])
        b[k++] = arr[i++];
        else
        b[k++]=arr[j++];
    }
    for(;i<=m;i++)
    b[k++] = arr[i];
    for(;j<=h;j++)
    b[k++] = arr[j];

    for(int i=l; i<k;i++)
     arr[i] = b[i];
}
void mergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid = l + (h-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    mergeSort(arr,0,n-1);

    for(int i = 0 ; i<n ; i++)
     cout<< arr[i]<<" ";
}