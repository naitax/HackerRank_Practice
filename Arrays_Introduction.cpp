#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N; // number of integers
    int *tab;
    cin>>N;
    tab  = new int[N];
    for (int i=0; i<N; i++)
    {
        cin>>tab[i];
    }  
    
    for (int i=(N-1); i>=0; i--)
    {
        cout<<tab[i]<<" ";
    }
    
    delete [] tab;
    return 0;
}
