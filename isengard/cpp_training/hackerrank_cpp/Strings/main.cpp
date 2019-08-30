#include <iostream>
#include <string.h>
using namespace std;


int main() {
        char a[1001];
        cin.getline(a,1001);
        char b[1001];
        cin.getline(b,1001);
        int s=0;
        int p=0;
        for (int i=0; i< strlen(a);i++){
            s++;
        }
        for (int i=0; i< strlen(b);i++){
            p++;
        }
        cout<<s<<" "<<p<<endl;
        char c[1001];
        strcpy(c, a);
        strcat(c, b);
        cout<<c<<endl;
        char h[1001];
        strcpy(h, a);
        h[0]=b[0];
        char k[1001];
        strcpy(k, b);
        k[0]=a[0];
        cout << h << " "<< k;
    return 0;
}
