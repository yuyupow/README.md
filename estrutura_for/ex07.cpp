#include <iostream>

using namespace std;

 int main() {
    int x;

    cout << "Quantos casos voce vai digitar? ";
    cin >> x;

    for (int i = 0; i < x; i++){
        double y,z, div;
        cout << "Entre com o numerador: " << endl;
        cin >> y;
        cout << "Entre com o numerador: " << endl;
        cin >> z;
        
        if (z == 0){
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
        div = y/z;
        cout << "DIVISAO = " << div << endl;
        }
    }
    return 0;
}