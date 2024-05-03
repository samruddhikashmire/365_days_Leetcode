// 165. Compare Version Numbers
class Solution {
public:
    vector<string> getTokens(string ver)
    {
        stringstream ss(ver);
        vector<string>ans;
        string token = "";
        while(getline(ss , token , '.'))
        {
            ans.push_back(token);
        }
        return ans;
    }
    int compareVersion(string version1, string version2) 
    {
        vector<string>v1 = getTokens(version1);
        vector<string>v2 = getTokens(version2);

        int m = v1.size();
        int n = v2.size();

        int i=0;
        while(i<n || i<m)
        {
            int a = i<m  ? stoi(v1[i]) : 0;
            int b = i<n  ? stoi(v2[i]) : 0;

            if(a<b)
            return -1;
            else if (a>b)
            return 1;
            else 
            i++;
        }
    
    return 0;
       
    }
};
