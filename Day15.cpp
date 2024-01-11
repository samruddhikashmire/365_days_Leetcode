/* 
Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.
Note: You are not allowed to use any extra space other than the internal stack space used due to recursion.
*/
#include <bits/stdc++.h>

void insertBottom(stack<int>st , int ele)
{
  if(st.empty())
  {
     st.push(ele);
     return;
  }
  int top = st.top();
  st.pop();
  
  insertBottom(st , ele);
  st.push(top);
  
}
void reverse(stack<int>st)
{
   if(st.empty())
     return;
  int top = st.top();
  st.pop();
  reverse(st);
  insertBottom(st,top);
     
}
