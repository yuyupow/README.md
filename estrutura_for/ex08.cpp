#include <iostream>

using namespace std;

 int main() {
    int x, res = 1;

    cin >> x;

    if(x == 0){
        cout << "FATORIAL= " << 1 << endl;
    }
    else{
    for (int i = 1; i <= x; i++){
        res = i * res;
    }
    }
    cout << "FATORIAL= " << res << endl;
    return 0;
}