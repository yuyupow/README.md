#include <iostream>

using namespace std;

 int main() {
    int n;

    cout << "quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++){
        double x, y, z, media;
        cout << "digite tres numeros:" << endl;
        cin >> x >> y >> z;

        media = ((x*2)+(y*3)+(z*5))/10;

        cout << "MEDIA: " << media << endl;

    }
    return 0;
}