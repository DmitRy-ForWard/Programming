#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main() {
    int f;
    cin >> f;

    set<int> a;

    for (int i = 0; i < f; ++i) {
        int d;
        cin >> d;

        a.insert(d);

        int j = 0;

        set<int> b;

        for (auto it = a.cbegin(); it != a.cend() && j < 5; ++it, ++j)
            b.insert(*it);

        copy(b.crbegin(), b.crend(), ostream_iterator<int>(cout, " "));

        cout << '\n';
    }
}