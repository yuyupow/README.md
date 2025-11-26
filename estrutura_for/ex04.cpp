#include <iostream>

using namespace std;

 int main() {
    int x, dentro = 0, fora = 0;

    cin >> x;

    for (int i = 0; i < x; i++){
        int y;
        cout << "digite um numero: ";
        cin >> y;
        if (10 <= y && y <= 20){
            dentro = dentro + 1;
        } else{
            fora = fora + 1;
        }
    }
    cout << "dentro: " << dentro << endl;
    cout << "fora: " << fora << endl;

    return 0;
}