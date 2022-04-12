#include<bits/stdc++.h>
using namespace std;
string remove_a(string s,int i)
{
    static string t="";

    if(i==s.size())
        return t;    
    char ch = s[i];
    if(ch == 'a')
    return remove_a(s,i+1);
    else
     return t + ch + remove_a(s,i+1);
}
int main()
{
    string s;
    getline(cin,s);
    cout<<remove_a(s,0);
    //cout<<remove_a(s,0);
    
}