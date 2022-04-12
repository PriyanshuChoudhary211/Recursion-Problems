#include<bits/stdc++.h>
using namespace std;
void subSet(string ans, string a, int i)
{
    
     if(i==a.length())
      {
       cout<<ans<<endl;
       return ;
      }     
      char m = a[i];
    
     subSet(ans+m, a,i+1);
     subSet(ans,a,i+1);

}
int main()
{
    string a;
    cin>>a;
    
    subSet("",a,0);
}