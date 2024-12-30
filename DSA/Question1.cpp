//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
  bool allZero(vector<int>&counter)
    {
        for(int &i:counter)
        {
            if(i!=0)  return false;
        }
        return true;
    }
    int search(string &p, string &s) 
    {
        // code here
        vector<int>counter(26,0);
        int i=0;
        int j=0;
        int ans=0;
        int k=p.length();
        for(int i=0;i<k;i++)
        {
            counter[p[i]-'a']++;
        }    
        while(j<s.length())
        {
            counter[s[j]-'a']--;
            if(j-i+1==k)
            {
                if(allZero(counter))
                {
                    ans++;
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends