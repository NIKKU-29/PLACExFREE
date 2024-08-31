// #include <bits/stdc++.h>
// using namespace std;


// //aim is to calculate the numer of time 'A' person wins
// int find_wins(vector<char>& Turns)
// {
//     int count=0;

//     for(int i=0;i<Turns.size();i+=2)
//     {
//         if(Turns[i]=='s' && Turns[i+1]=='w' || Turns[i]=='w' && Turns[i+1]=='g' || Turns[i]=='g' && Turns[i+1]=='s' )
//         {
//             count++;
//         }
//     }

//     return count;
// }

// //snake - water - gun to s - w - g

// int shorter(string& s)
// {

//     vector<char>Turns;

//     int j=0;
//     int i=0;
    
//     while(i<s.size())
//     {

//         if(s[i]=='s')
//         {
//             Turns.push_back('s');
//             i+=5;
//             j++;
//         }
//         else if(s[i]=='w')
//         {
//             Turns.push_back('w');
//             i+=5;
//             j++;
//         }
//         else{
//                 Turns.push_back('g');
//                 i+=3;
//                 j++;
//         }

//     }

//     return find_wins(Turns);

// }

// int main() {
    
//     string s;
//     cout<<"ENTER THE GAME STRING  ";
//     getline(cin,s);

//     cout<<shorter(s);

    
    
//     return 0;
// }

//if it is not given that string only contains words gun , water , snake then
//but if a word is mis spelled thin code leads into a error no ouput is shown

#include <bits/stdc++.h>
using namespace std;


int find_wins(vector<char>& Turns) {
    int count = 0;

    for (int i = 0; i < Turns.size() - 1; i += 2) {
        if ((Turns[i] == 's' && Turns[i + 1] == 'w') ||
            (Turns[i] == 'w' && Turns[i + 1] == 'g') ||
            (Turns[i] == 'g' && Turns[i + 1] == 's')) {
            count++;
        }
    }

    return count;
}

int shorter(string& s) {
    vector<char> Turns;
    int i = 0;

    while (i < s.size()) {
        if (s[i] == 's' && s.substr(i, 5) == "snake") {
            Turns.push_back('s');
            i += 5;
        } else if (s[i] == 'w' && s.substr(i, 5) == "water") {
            Turns.push_back('w');
            i += 5;
        } else if (s[i] == 'g' && s.substr(i, 3) == "gun") {
            Turns.push_back('g');
            i += 3;
        }

            //this is added to check that id a word is misspelled then it should show error 
            //it is not part of the code, just to see that probability of other things is also possible
        // else{
        //     cout<<"ERRORS";
        //     break;
        // }
    }

    return find_wins(Turns);
}

int main() {
    string s;
    cout << "ENTER THE GAME STRING: ";
    getline(cin, s);

    cout << shorter(s) << endl;

    return 0;
}
