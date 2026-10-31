
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    // Remove leading zeroes
    int i = 0, j = 0;

    while (i < a.size() - 1 && a[i] == '0') {
        i++;
    }

    while (j < b.size() - 1 && b[j] == '0') {
        j++;
    }

    a = a.substr(i);
    b = b.substr(j);

    if (a.size() < b.size()) {
        cout << "<";
    }
    else if (a.size() > b.size()) {
        cout << ">";
    }
    else if (a == b) {
        cout << "=";
    }
    else if (a < b) {
        cout << "<";
    }
    else {
        cout << ">";
    }

    return 0;
}
