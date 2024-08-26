// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"ENTER THE SIZE OF THE ARRAY";
//     cin >> n;   
//     vector<int>vec(n);

//     for(int i=0;i<n;i++)
//     {
//         cin>>vec[i];
//     }

//     int PositiveNumbersCount=0;  //it would be our new length of the array

//     for(auto elem : vec)
//     {
//         if(elem>0)
//         {
//             PositiveNumbersCount++;
//         }
//     }
//     int actual_mid=(PositiveNumbersCount-1)/2;

//     int i=0;
//     while(actual_mid+1>0)
//     {
//         if(vec[i]>0)
//         {
//             actual_mid--;
//         }

//         i++;
//     }    

//     cout<<vec[i-1];

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY";
    cin >> n;   
    vector<int>vec(n);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    vector<int>holder;

    for(auto elem : vec)
    {
        if(elem > 0) holder.push_back(elem);
    }

    int L=0;
    int R=holder.size()-1;

    int mid=L+(R-L)/2;

    cout<<holder[mid];

    return 0;
}
