#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,a,b,c;
    cin>>n;
    vector<int> v;
    vector<int> :: iterator itr;
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(c);
    }
    cin>>a;   
    for(int i=0;i<a;i++){
        cin>>b;
        itr=lower_bound(v.begin(),v.end(),b);
        if(v[itr-v.begin()]==b)
            cout<<"Yes "<<(itr-v.begin()+1)<<endl;
        else
            cout<<"No "<<(itr-v.begin()+1)<<endl;
    }
    return 0;
}
