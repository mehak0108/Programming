#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.substr(0, 3) == "ftp") {
        cout << "ftp://";
        s = s.substr(3, s.size() - 3);
    } else if(s.substr(0, 4) == "http") {
        cout << "http://";
        s = s.substr(4, s.size() - 4);
    }
    if (s.substr(s.size() - 2, 2) == "ru") {
        cout << s.substr(0, s.size() - 2) << ".ru" << endl;
        return 0;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'r' && s[i + 1] == 'u') {
            cout << s.substr(0, i);
            cout << ".ru/" << s.substr(i + 2, s.size() - i - 2);
            return 0;
        }
    }
    return 0;
}
