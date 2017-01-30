#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--){
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << resetiosflags(ios::uppercase);
        cout << setw(0) << internal;

        cout.setf(ios::hex, ios::basefield);
        cout.setf(ios::showbase);

        cout << (long long int)A << "\n";
        cout << setfill('_') << setw(15) << right << fixed << setprecision(2) << showpos <<  B << "\n";
        cout << setiosflags(ios::uppercase) << noshowpos << scientific << setprecision(9) << C << "\n";
	}

	return 0;
}