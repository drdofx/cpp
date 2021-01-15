#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    regex target("(WUB)+");
    string replace = " ";

    string s2 = regex_replace(s,target,replace);

    cout << s2 << endl;

    return 0;
}