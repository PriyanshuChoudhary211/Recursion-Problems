#include<bits/stdc++.h>
using namespace std;
string remove_word(string s, int i)
{
    string t="";
    static string k ="";
    if(i>=s.length())
    return t;

    string x = "apple";
    char m = s[i];
    size_t a = s.find(x); //here this find() --> will help to return the starting index of element(if exist) otherwise
                          // return something npos value(1123235414)
    if(a !=string ::npos ) //string :: npos --> check whether the find() fail or not
       {
           if(i == a)
           {
               return remove_word(s,i+5);
           }
           else
           return k + m + remove_word(s,i+1);
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
