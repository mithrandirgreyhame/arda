#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0 ;
    int a[1000000]; 
    cin >> n; 
    vector<int>v;
    for (int i= 0; i<n;i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end()); 
    for(int i = 0; i<n; i++){
        cout<<  v[i]<< " ";
    }
   
    return 0;
}

