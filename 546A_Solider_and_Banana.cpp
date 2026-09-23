#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    int sum = 0;
    int num = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++){
        num = k * i;
        sum = sum + num;
    }

    if(sum > n){
        cout << sum - n;
    }
    else{
        cout << 0;
    }

    return 0;
}