#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cout<<"ENTER THE NUMBER ";
    cin >> i;
    int product=1;
    int count=0;

    string ntr = to_string(i);

    if(i%2==1)
    {
        for(auto elem : ntr)
        {
            product*=elem-'0';
        }

            cout<<product;
    }

    else{
            for(auto elem : ntr)
            {
                count+=elem-'0';
            }

            cout<<count;
    }
    
    return 0;
}