#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n; //the number of variable-length arrays
    int q; //the number of queries
    int k; //the number of elements in array
    int value;
    int index;
    int number_of_array;
    
    cin>>n>>q;
    vector<vector<int>> numbers;
    for (int i=0; i<n; i++)
    {
        cin>>k;
        vector <int> inumbers;
        for (int j=0; j<k; j++)
        {
            cin>>value;
            inumbers.push_back(value);
        }
        numbers.push_back(inumbers);
    }
for (int i=0; i<q; ++i)
{
    cin>>number_of_array>>index;
    cout<<numbers[number_of_array][index]<<endl;
}
    return 0;
}
