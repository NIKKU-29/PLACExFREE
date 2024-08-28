#include <bits/stdc++.h>
using namespace std;

int max_score(string s)
{
     int consecutive_H_count=0;
     int score=0;

    for(char elem : s)
    {
        if(consecutive_H_count==3)
        {
            return score;
        }

        if(elem==' ') continue;

        if(elem=='H') 
        {
            score+=2;
            consecutive_H_count++;
        }
        else{
            
            score-=1;
            consecutive_H_count=0;
        }
    }

    return score;
}

int main() {
    int n;
    cout<<"ENTER THE SIZE OF THE STRING";
    cin >> n;
    cin.ignore();

    string s;
    cout<<"ENTER THE H-T SEQUENCE";
    getline(cin,s);

    cout<<max_score(s);

    return 0;
}