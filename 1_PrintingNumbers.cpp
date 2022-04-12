/*

HOW TO UNDERSTAND AND APPROACH A PROBLEM:
1. Identify if you can break down problem into
   smaller problem.
2. Write the recurrence relation if needed.
3. Draw the recursive tree.
4. About the tree.
    --> See the flow of function, how they are
        getting in stack.
    --> Identify and focus on left tree calls and
        right tree 
        */

















#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if(n==0)
    {
        cout<<n<<" ";
        return;
    }
      else
      print(n-1);

      cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    print(n);
}