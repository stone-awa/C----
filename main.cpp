#include<bits/stdc++.h>
using namespace std;

bool is(int x){
    if (x == 1) return 0;
    for (int i = 2; i <= pow(x, 0.5); i++){
        for (int j = 2; j <= x; j++){
        if (i * j == x) return 0;
    }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++){
        if (is(i) && is(i - 2)){
            cout << i - 2 << ' ' << i << endl;
        }
    }
}