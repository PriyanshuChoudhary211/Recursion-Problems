#include<bits/stdc++.h>
using namespace std;

//ONLY FOR SINGLE ELEMENT

    // int search(int arr[], int n, int x, int index)
    // {
    //     if(index == n-1 && x != arr[index])
    //     {
    //              return -1;
    //     }
    //     if(arr[index]==x)
    //     return index; 

    //     return search(arr,n,x,index+1);

    // }

//FOR MULITPLE ELEMENT

    void search(int arr[], int n, int x, int index)
    {
        if(index == n-1 && x != arr[index])
        {
                return;
        }
        if(arr[index]==x)
        cout<< index<<" ";

        return search(arr,n,x,index+1);

    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];

    }
    int x;
    cin>>x;
    // if(search(arr,n,x,0))
    //   cout<<"Element found"<<endl;
    //   else 
    //   cout<<"Element not found"<<endl;
    search(arr,n,x,0);
}