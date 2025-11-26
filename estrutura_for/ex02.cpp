#include <iostream>

using namespace std;

 int main() {
    int x, y, soma = 0;

    cout << "digite 2 numeros:" << endl;
    cin >> x >> y;

    if(x < y){
        int w = x;
        int z = y;
    }
    else {
        int w = y;
        int z = x;
    }

    for (int i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    
    cout << "soma dos impares: " << soma << endl;
    return 0;
}