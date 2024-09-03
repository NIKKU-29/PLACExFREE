#include <bits/stdc++.h>
using namespace std;

int main() {

        string s;
        cout<<"Enter A string ";
        getline(cin,s);

        //we have to find longest un-interrupted substring
        int maxi=0;
        int count=0;
        for(auto elem : s)
        {
            if(isalpha(elem))
            {
                count++;
            }
            else{
                    count=0;
            }

            maxi=max(maxi,count);
        }

        cout<<maxi;

        return 0;
}