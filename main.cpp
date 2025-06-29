#include<bits/stdc++.h>
using namespace std;
bool LY(int x){
    if ((x % 100) && !(x % 4)){
        return 1;
    }
    else if (!(x % 100) && !(x % 400))
    {
        return 1;
    }
    return 0;
}

int main(){
    int y;
    cin >> y;
    if (LY(y)){
        printf("%s", "YES")
    }
    else{
        printf("%s", "NO")
    }
}