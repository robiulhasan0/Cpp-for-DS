#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string s, x;
        cin >> s >> x;
        size_t pos = s.find(x);
        while (pos != string::npos) {
            s.replace(pos, x.length(), "#");
            pos = s.find(x, pos + 1);
        }
        cout << s << endl;
    }

    return 0;
}
