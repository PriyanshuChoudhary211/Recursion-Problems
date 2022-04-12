#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int key, int s, int e)
{
    if(s>e)
    return -1;
    int mid = s + ( e - s ) / 2;
    if(arr[mid] == key)
    return mid;

    if(arr[s]<=arr[mid])
    {
        if(key>=arr[s] && key<=arr[mid])
        return search(arr, n, key, s,mid-1);
        else
        return search(arr,n , key, mid+1,e);
    }
    if(key>=arr[mid] && key<=arr[e])
      return search(arr,n,key,mid+1,e);
    else
    return search(arr,n,s,key,mid-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
     cin >> arr[i];

     int key;
     cin>>key;
     cout<<search(arr,n,key,0,n-1);
}