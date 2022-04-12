#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n, int index)
{
    if(index == n-2)
      return true;
    
    return arr[index]<=arr[index+1] && sorted(arr,n,index+1);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
      cin>>arr[i];

    // if(sorted(arr,n,0)==1)
    // cout<<"Array is sorted"<<endl;
    // else 
    // cout<<"Array is not sorted"<<endl;
    if(sorted(arr,n,0))
      cout<<"True"<<endl;
      else cout<<"False"<<endl;
}