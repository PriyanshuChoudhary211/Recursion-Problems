/*

* 
* * 
* * * 
* * * * 
* * * * * 

*/


#include<bits/stdc++.h>
using namespace std;
void pattern(int n,int x,int m)
{
   
   if(n==0)
     return;
     if(x==m)
     {
         cout<<endl;
         return pattern(n-1,0,m+1);
     }
    if(x<m)
    {
        cout<<"* ";
        return pattern(n,x+1,m);
    }

    
}
int main()
{
    int n;
    cin>>n;
    pattern(n,0,1);
}