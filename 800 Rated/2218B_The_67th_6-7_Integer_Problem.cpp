#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int sum = 0;
        int largest = -1000;

        for(int i = 0; i < 7; i++) {
            int k;
            cin >> k;

            sum = sum + k;

            if(k > largest) {
                largest = k;
            }
        }

        sum = sum - largest;
        sum = -sum;
        sum = sum + largest;

        cout << sum << endl;
    }

    return 0;
}