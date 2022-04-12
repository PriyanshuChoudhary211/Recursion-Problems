#include<bits/stdc++.h>
using namespace std;
int countzero(int n)
{
    static int count = 0;
    if(n==0)
    return 0;
    else
    {
       
        int rem = n%10;
        if(rem == 0)
        count++;
        countzero(n/10);
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
   cout<< countzero(n);
}