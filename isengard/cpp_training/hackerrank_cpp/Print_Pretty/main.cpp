#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << resetiosflags(ios::
        uppercase|ios::scientific);
        cout << setiosflags (ios::left|ios::fixed);
        cout << setw(0) << hex << setiosflags (ios::showbase);
        cout << (unsigned long )A << endl;

        cout << resetiosflags(ios::showbase);
        cout << setw(0xf) << setfill('_')<< dec ;
        cout << setiosflags(ios::showpos) << setprecision(2);
        cout  << B << endl;

        cout << resetiosflags(ios::fixed|ios::showpos);
        cout << setiosflags (ios::scientific | ios::uppercase) << setprecision(9);
        cout << C ;

	}
	return 0;

}
