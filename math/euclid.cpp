#include <iostream>

using namespace std;

int main() {
	int m, n, r, pbb;
	cin >> m >> n;
	int m2 = m, n2 = n;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	pbb = m;
	cout << "PBB(" << m2 << ", " << n2 << ") = " << pbb << endl;
}
