#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    static int rev = 0;
    if(n==0)
    {
        return 0;
    }
    else{
        int rem = n%10;
         rev = rev * 10 + rem;
         reverse(n/10);
    }
    return rev;
  
}
int main()
{
    int n;
    cin>>n;
    int x = reverse(n);
    if(n==x)
    cout<<"Number is palindrome"<<endl;
    else cout<<"Number is not palindrome"<<endl;
    
}