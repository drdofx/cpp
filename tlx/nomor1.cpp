#include <iostream>
using namespace std;

int main() {
	int x = 0, N = 5;	
	for (int i = 0; i < N; i++) {
    		for (int j = 0; j < N; j++) {
        		for (int k = j; k < N; k++) {
            			x = x + 2;
       	 }
   		 }
			}
	
	cout << x << endl;
	return 0;
}
