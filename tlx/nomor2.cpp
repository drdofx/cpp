#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int n = 8;
	for (int i = 1; i <= n; i++) {
	    count = count + (2 * i - 1);
	}
	cout << count << endl;
	return 0;
}
