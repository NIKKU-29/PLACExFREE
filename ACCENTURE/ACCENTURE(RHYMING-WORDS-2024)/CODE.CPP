#include <bits/stdc++.h>
using namespace std;

    string most_rhyming(string word,vector<string>& str)
    {
        int maxlength=0;
        string ans="";

        for(auto elem : str)
        {
            int m=word.size();
            int curr_length=0;
            int n=elem.size();

            while(elem[n-1]==word[m-1] && n>=0 && m>=0)
            {
                curr_length++;
                n--;
                m--;
            }
            
            if(curr_length > maxlength || curr_length == maxlength && elem.size() < ans.size())
            {
                maxlength=curr_length;
                ans=elem;
            }        
        }      

        return ans; 
    }
int main() 
{ 
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY OF STRINGS";
    cin >> n;
    cin.ignore();

    string word;
    cout<<"ENTER THE MAIN WORD --> ";
    getline(cin,word);
    
    vector<string>str;
    for(int i=0;i<n;i++)
    {   
        string s;
        cout<<"ENTER STRING : "<< i+1<<" -> ";
        getline(cin,s);
        str.push_back(s);
    }

    string sol = most_rhyming(word,str);

    if(sol.size()==0)
    {
        cout<<"No Word";
    }
    else{
            cout<<sol;
    }

       
    
    return 0;
}