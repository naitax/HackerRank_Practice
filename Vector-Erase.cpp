#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N; // size of vector
    int x, position, range1, range2;
    vector <int> numbers;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>x;
        numbers.push_back(x);
        
    }
    cin>>position;
    numbers.erase(numbers.begin()+position-1);
    cin>>range1>>range2;
    numbers.erase(numbers.begin()+range1-1,numbers.begin()+range2-1);
    
    cout<<numbers.size()<<endl;
    for (int i=0; i<numbers.size(); i++)
    {
        cout<<numbers[i]<<" ";
    }
    return 0;
}
