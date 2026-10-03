#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {

        int a[4];

        for(int i = 0; i < 4; i++) {
            cin >> a[i];
        }

        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}