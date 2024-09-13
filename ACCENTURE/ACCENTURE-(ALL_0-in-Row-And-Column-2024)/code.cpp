#include <bits/stdc++.h>
using namespace std;

void finder(vector<vector<int>>& arr,int n)
{

    int ans=0;
    for(int i=0;i<n;i++)
    {
        bool rows=true;
        bool columns=true;

            for(int j= 0 ; j<n ; j++)
            {
                if( i == j || arr[i][j] == 0)
                {
                    continue;
                }


            }
            

            for(int k = 0 ; k<n ; k++)
            {
                if( i == k || arr[k][i] == 0)
                {
                    continue;
                }

                

                    columns=false;
                    break;
                
            }

            if(rows && columns)
            {
                ans=i;
                break;
            }

    }

    cout<<ans;
        
}


int main() {
    
    int size;
    cin>>size;
    vector<vector<int>>arr(size,vector<int>(size));

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }

        cout<<endl;
    }

    finder(arr,size);

    return 0;
}