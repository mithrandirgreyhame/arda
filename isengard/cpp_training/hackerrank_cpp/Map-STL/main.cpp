#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    map<string, int> m;
    int x; 
    int n; 
    cin>>n;
    char s[1001];
    int p;
    for(int i=0;i<n;i++){       
        cin>>x;
        cin>>s;
        if (x==1){
            cin>>p;
            m[s]+=p;
        }
        else if (x==2){
            m[s]=0;
        }
        else cout<<m[s]<<endl;
    }    
    return 0;
}




