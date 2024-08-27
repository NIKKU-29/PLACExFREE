#include <bits/stdc++.h>
using namespace std;

string common_sub(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int maxLength = 0;
    int endPos = 0;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i=0;i<n;i++) dp[i][0]=0;
    for(int j=0;j<m;j++) dp[0][j]=0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }

            if(dp[i][j]>maxLength)
            {
                maxLength=dp[i][j];
                endPos=i-1;
            }
        }
    }

    return s1.substr(endPos-maxLength+1,maxLength);
}

int main()
{
    string s1, s2;
    cout << "ENTER THE STRING 1";
    getline(cin, s1);
    cout << "ENTER THE STRING 2";
    getline(cin, s2);

    string ans = common_sub(s1, s2);
    int result = 0;
    cout << "****** " << ans;

    for (char elem : ans)
    {
        result += (int)elem;
    }

    cout << result;

    return 0;
}