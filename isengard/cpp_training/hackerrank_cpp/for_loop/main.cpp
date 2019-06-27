#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int a, b;
string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main() {
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (i < 10)
            cout << num[i - 1] << endl;
        else
            cout << ((i & 1) ? "odd" : "even") << endl;
    }
    return 0;
}
