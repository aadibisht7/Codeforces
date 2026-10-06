#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    while(k--) {
        int x, n;
        cin >> x >> n;

        int sum = 0;

        for(int j = 1; j <= n; j++) {
            if(j % 2 == 0) {
                sum = sum - x;
            }
            else {
                sum = sum + x;
            }
        }

        cout << sum << endl;
    }

    return 0;
}