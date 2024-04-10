// 950. Reveal Cards In Increasing Order
//Approach 1
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int> temp(deck.size(), -1);
        int j=0,i=0;
        int n = deck.size();
        bool skip=false;
        while(i<n)
        {
             if(temp[j] == -1)
             {
                if(skip==false)
                {
                    temp[j]=deck[i];
                    i++;
                }
                skip = !skip;
             }
             j = (j+1)%n;
        }
        
        return temp;

    }
};

//Approach 2
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();
        queue<int>q;
        vector<int> res(n);
        

        for(int i=0;i<n;i++)
        {
            q.push(i);

        }

        for(int i=0; i<n ; i++)
       {
          int idx = q.front();
          q.pop();
          res[idx] = deck[i];
          if(!q.empty())
          {
            q.push(q.front());
            q.pop();
          }
       }

       return res;
    }
};
