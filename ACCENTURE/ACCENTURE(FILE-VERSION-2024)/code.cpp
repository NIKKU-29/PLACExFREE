//Not a easy-pesy question i must say.
//but time consuming at least was for me.(including the input taken time)

#include <bits/stdc++.h>
using namespace std;

int solver(vector<string>& str)
{
    int max_value=-1;

    for(string elem : str)
    {   

        if(elem[0]=='F' && elem [1]=='i' && elem [2]=='l' && elem [3]=='e' && elem [4]=='_')
        {
            string curr_value="";
            int i=5;
            while(i < elem.size())
            {
                if(isdigit(elem[i]))
                {
                    curr_value+=elem[i];
                }

                else{
                        curr_value="";
                        break;
                }
                i++;
            }
            if(curr_value.size()!=0)
            {
            max_value=max(max_value,stoi(curr_value));
            }
            
        }
    }

    return max_value;
}

int main() {
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY OF STRINGS";
    cin >> n;
    cin.ignore();
    
    vector<string>str;
    for(int i=0;i<n;i++)
    {   
        string s;
        cout<<"ENTER STRING"<< i+1<<" -> ";

        getline(cin,s);
        str.push_back(s);
    }

       cout<<solver(str);
    
    return 0;
}