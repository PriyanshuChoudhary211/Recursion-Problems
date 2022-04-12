#include<bits/stdc++.h>
using namespace std;
string remove_word(string s, int i)
{
    string t="";
    static string k ="";
    if(i>=s.length())
    return t;

    string x = "apple";
    string n = "app";
    char m = s[i];
    size_t b = s.find(n);
    size_t a = s.find(x); //here this find() --> will help to return the starting index of finding element(if exist) otherwise
                          // return something npos value(1123235414)
           //string :: npos --> check whether the find() fail or not 
    if(b !=string ::npos)
     {
            if(a !=string ::npos )
            {
                return k + m + remove_word(s,i+1);
            }
            else
            {
                if(i == b)
                {
                    return remove_word(s,i+3);
                }
                else
                return k+m+remove_word(s,i+1);
            }
     }
       else
       return k + m + remove_word(s,i+1);
       
}
int main()
{
    string s;
    getline(cin,s);
    cout<<remove_word(s,0);
  
} 
