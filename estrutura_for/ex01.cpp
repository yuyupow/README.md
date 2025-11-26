#include <iostream>

using namespace std;

 int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 11; i++){
        int r = n * i;
       cout << n << " x " << i << " = " << r << endl;
    }
    
    return 0;
}