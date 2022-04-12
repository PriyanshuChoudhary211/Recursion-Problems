/*

* * * * * 
* * * *   
* * *     
* *       
* 


*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int n,int x)
{
     if(n==0)
      return;
        if(n==x)
        {
            cout<<endl;
            return pattern(n-1,0);
        }
        else
        {
            cout<<"* ";
            return pattern(n,x+1);
        }

   return;
}
int main()
{
    int n;
    cin>>n;
    pattern(n,0);
}