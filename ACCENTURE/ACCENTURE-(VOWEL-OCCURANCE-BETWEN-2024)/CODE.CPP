#include <bits/stdc++.h>
using namespace std;

string solver(string& s1,unordered_set<char>&mp)
{
    string ans="";
    ans+=s1[0];

    for(int i=1;i<s1.size()-1;i++)
    {
        if(mp.find(s1[i])!=mp.end() &&  mp.find(s1[i-1])==mp.end() && mp.find(s1[i+1])==mp.end())
        {
            continue;
        }

        ans+=s1[i];

    }

    ans+=s1[s1.size()-1];

    cout<<ans;

    return ans;
}

int main() {
    
    string s1;
    getline(cin,s1);
    unordered_set<char>mp={'a','e','i','o','u'};

    //function to remove the occurance of vovels between consonants

    solver(s1,mp);
    return 0;
}