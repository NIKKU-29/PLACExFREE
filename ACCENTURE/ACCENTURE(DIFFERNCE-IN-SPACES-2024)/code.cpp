#include <bits/stdc++.h>
using namespace std;

    void count_spaces(string& s1,string& s2)
    {
        int count1=0;
        int count2=0;

        for(char elem : s1)
        {
            if(elem == ' ')
            {
                count1++;
            }
        }
        for(char elem : s2)
        {
            if(elem == ' ')
            {
                count2++;
            }
        }

        int diff=abs(count1-count2);

        if(diff%2==0)
        {
            cout<<"EVEN : "<<diff;
        }
        else{
                cout<<"ODD : "<<diff;
           }

    }

int main() {
    
        string s1,s2;
        
        cout<<"ENTER STRING 1 ";
        getline(cin,s1);
        cout<<"ENTER STRING 2 ";
        getline(cin,s2);

        count_spaces(s1,s2);

    return 0;
}