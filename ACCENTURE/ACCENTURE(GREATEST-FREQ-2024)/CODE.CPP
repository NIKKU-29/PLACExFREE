// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_map>
// using namespace std;

// int findSecondLargestWithMinHeap(const vector<int>& vec) {
//     if (vec.size() < 2) {
//         cout << "Array should have at least two elements." << endl;
//         return -1;
//     }

//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     unordered_map<int,int>seen;

//     // Process each element
//     for (int num : vec) {

//             minHeap.push(num);
//             seen[num]++;

//             // Maintain heap size of 2
//             if (minHeap.size() > 2) {
//                 minHeap.pop();
//             }
//         }
    

//     if (minHeap.size() < 2) {
//         cout << "There is no distinct second largest element." << endl;
//         return -1;
//     }

//     // The top of the min heap is the second largest element
//     return seen[minHeap.top()];
// }

// int main() {
//     int n;
//     cout << "ENTER THE SIZE OF THE ARRAY: ";
//     cin >> n;

//     vector<int> vec(n);
//     cout << "ENTER ELEMENTS OF THE ARRAY: ";
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//     }

//     int secondLargest_freq = findSecondLargestWithMinHeap(vec);

//     if (secondLargest_freq != -1) {
//         cout << "The second largest element freq is: " << secondLargest_freq << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int solver(vector<int>&vec)
{
    int n=vec.size();

    if(n<2)
    {
        return -1;
    }


    int idx=n-2;
    int largest=vec[n-1];
    

    while(idx>=0 && vec[idx]== vec[vec.size()])
    {
        idx--;
    }

    int second=vec[idx];
    int count=1;

    
        while(idx> 0 && vec[idx-1]==second)
        {
            count++;
            idx--;
        }
    

    return count;
}

int main() {
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY: ";
    cin >> n;

    vector<int>vec(n);
    cout << "ENTER ELEMENTS OF THE ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int secondLargest_freq = solver(vec);

    if (secondLargest_freq != -1) {
        cout << "The second largest element freq is: " << secondLargest_freq << endl;
    }

    return 0;
}