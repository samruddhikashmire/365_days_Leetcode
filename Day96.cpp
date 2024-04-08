//1700. Number of Students Unable to Eat Lunch

// Approach 1 
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int>q;
       stack<int>st;
       int n =students.size();
       for (int i = 0; i < n; i++) {
            st.push(sandwiches[n - i - 1]);
            q.push(students[i]);
        }
       int count =0;
       while(!st.empty())
       {
          int len = st.size();
          if(st.top() == q.front())
          {
              count=0;
              st.pop();
              q.pop();
          }
          else
          {
             count++;
             int ele = q.front();
             q.pop();
             q.push(ele);
          }
          if(count==len)
          return count;
       }
       return 0;
    }

};

// Approach 2
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       stack<int>st;
       int c0=0,c1=0;
       int n =students.size();
       for (int i = 0; i < n; i++) {
            st.push(sandwiches[n - i - 1]);
        }
        for(int i=0;i<n;i++)
        {
            if(students[i] ==0)
            c0 ++;
            else
            c1++;
        }
        while(!st.empty())
        {
            if(st.top() == 0 && c0!=0)
              {
                c0--;
                st.pop();
              }
            else if (st.top() == 1 && c1!=0)
            {
              c1--;
              st.pop();
            }
            else
             return st.size();
        }
        return 0;
    }

};
