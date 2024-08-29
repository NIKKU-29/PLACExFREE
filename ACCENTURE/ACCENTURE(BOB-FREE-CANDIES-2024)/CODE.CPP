#include <bits/stdc++.h>
using namespace std;


int max_candies(vector<int>& candies,int& max_money)
{

    int count=0;
    sort(candies.begin(),candies.end());

    for(auto elem : candies)
    {
        if(elem % 5==0)
        {
            count++;
        }
        else if(max_money >= elem){

                max_money-=elem;
                count++;
        }

    }

    return count;
}

int main() {
    int N;
    cout<<"ENTER THE SIZE OF CANDIES ARRAY";
    cin >> N;
    vector<int>candies(N);
    for(int i=0;i<N;i++)
    {
        cin>>candies[i];
    }
    int max_money=0;
    cout<<"ENTER MAX MONEY BOB HAS";
    cin>>max_money;


    cout<<max_candies(candies,max_money);


    
    return 0;
}