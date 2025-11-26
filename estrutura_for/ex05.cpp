#include <iostream>

using namespace std;

 int main() {
    int x, y;
    
    cout << "quantos numeros voce quer digitar? ";
    cin >> x;

    for (int i = 0; i < x; i++){
        cout << "digite um numero: ";
        cin >> y;
        if(y < 0 && y % 2 == 0){
            cout << "NEGATIVO PAR" << endl;
        } else if (y > 0 && y % 2 != 0){
            cout << "POSITIVO IMPAR"<< endl;
        } else if (y < 0 && y % 2 != 0){
            cout << "NEGATIVO IMPAR"<< endl;
        } else if (y > 0 && y % 2 == 0){
            cout << "POSITIVO PAR"<< endl;
        } else {
           cout << "nulo" << endl;
        }
       
    }
    
    return 0;
}