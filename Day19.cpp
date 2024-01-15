/*You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.
  */

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map <int , int> map;
        vector<int>w;
        vector<int>l;
        for(int i=0 ; i<matches.size() ; i++)
        {
            int lose = matches[i][1];
            map[lose]++;
        }

        for(int i=0 ; i<matches.size() ; i++)
        {
            int win = matches[i][0];
            int los = matches[i][1];
            if(map.find(win) == map.end())
            {
                w.push_back(win);
                map[win]=2;
            }
            if(map[los]==1)
           l.push_back(los);

        }
        sort(w.begin() , w.end());
        sort(l.begin() , l.end());

        return {w,l};
    }
};
