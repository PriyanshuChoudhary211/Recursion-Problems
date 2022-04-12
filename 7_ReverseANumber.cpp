#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    static int rev = 0;
    if(n==0)
    return 0;
    int rem = n%10;
    rev = rev*10 + rem;
    reverse(n/10);

    return rev;    
}
int main()
{ 
    int n;
    cin>>n;
   cout<<reverse(n);
}