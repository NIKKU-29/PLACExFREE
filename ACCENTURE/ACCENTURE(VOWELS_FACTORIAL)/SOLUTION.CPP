#include<bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    int multi=1;
    for(int i=n;i>=1;i--)
    {
        multi*=i;
    }   

    return multi;
}

int main()
{
    string str="";
    cout<<"ENTER THE STRING  ";
    getline(cin,str);
    int ans=0;
    

    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    unordered_map<char,int>consonant;

    for(char elem : str)
    {
        if(!vowels.count(elem))
        {
           consonant[elem]++;
        }
       
    }

    int total=0;
    int pre=0;

    for(auto elem : consonant)
    {
        total+=elem.second;  
    }

    int num=factorial(total);

    for(auto elem : consonant)
    {
        if(elem.second>1)
        {
            num/=factorial(elem.second);
        }
    }

    

    cout<<num;

    return 0;
}