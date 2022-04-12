#include<bits/stdc++.h>
using namespace std;
// Tail recursion --> When the function call is at last than the recursion
// is tail recursion.
int fibonacci(int n)
{
    if(n<2)
     return n;    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
   cout<<fibonacci(n);
}