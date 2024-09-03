#include <bits/stdc++.h>
using namespace std;

int main() {

    //given input is a number

    int N;
    cout<<"ENTER YOUR NUMBER  ";
    cin >> N;


    ///REMOVE ALL 0 AND REPLACE THEM TO A 5
    
    string num=to_string(N);

    for(int i=0;i<num.size();i++)
    {
        if(num[i] == '0')
        {
          num[i]='5';
        }
    }

    cout<<stoi(num);

    return 0;
}