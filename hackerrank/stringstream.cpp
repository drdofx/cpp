#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream yo(str);
    char ch; int a;
    vector<int> ya;
    
    while (yo >> a) {
        ya.push_back(a);
        yo >> ch;
    }
    return ya;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}