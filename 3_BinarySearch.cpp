#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int h,int key)
{
   if(l>h)
     return -1;
   int mid = l + (h-l)/2;

   if(arr[mid]==key)
     return mid;
    else if(arr[mid]>key)
      return binarySearch(arr,l,mid,key);
    else
      return binarySearch(arr,mid+1,h,key);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++)
     cin>>arr[i];

     int key;
     cin>>key;
    
    cout<<binarySearch(arr,0,n-1,key);
} 