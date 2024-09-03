#include <bits/stdc++.h>
using namespace std;

int main() {

        string s;
        getline(cin,s);
        int count=0;
        int maxi=0;
    
        for(int i=0;i<s.size();i++)
        {
            while(s[i]!='.' && i<s.size())
            {
                count++;
                i++;
            }
        
            maxi=max(maxi,count);
            count=0;
        }

        maxi = max(maxi, count);
        cout << maxi;

    return 0;
}