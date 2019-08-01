#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {

    int a, x, y;
    cin >> a; 
    set<int> s; 
    for (int i = 0; i < a; i++) 
    {
        cin >> x;
        cin >> y;
        if (x == 1)
            s.insert(y);
        else if (x == 2)
            s.erase(y);
        else if (x == 3) {
           set<int>::iterator it=s.find(y);
            if(it==s.end())
                {
                cout<<"No"<<endl;}
                else {cout<<"Yes"<<endl;}
        }
    }
    return 0;
}




