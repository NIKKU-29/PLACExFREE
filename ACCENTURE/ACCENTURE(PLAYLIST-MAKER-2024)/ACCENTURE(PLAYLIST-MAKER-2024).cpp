#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="";
    cout<<"ENTER YOUR PLAYLIST ";
    cin>>s;
    int k=0;
    cout<<"ENTER VALUE OF braket size";
    cin>>k;
      //her favourite song is a

      int maxcount=0;
      int currcount=0;

       int i=0;
       int j=0;

       while(j<k)
       {
            if(s[j]=='a')
            {
                currcount++;
            }
            j++;
       }

         maxcount=max(maxcount,currcount);

       while(j<s.length())
       {
            if(s[i]=='a') currcount--;
            if(s[j]=='a') currcount++;

            maxcount=max(maxcount,currcount);

            i++;
            j++;
       }



       cout<<maxcount;
       return 0;
}