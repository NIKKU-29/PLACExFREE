#include <bits/stdc++.h>
using namespace std;

int solver(string&s)
{

    int count=0;
    stringstream ss(s);

    string word;

    while(ss >> word)
    {
        if(word[0]=='A' || word[0]=='a')
        {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin,s);

    cout<<solver(s);
    
    return 0;
}