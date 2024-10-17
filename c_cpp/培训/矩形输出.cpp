#include <iostream>  
#include <iomanip>  

using namespace std;

int main() {
    int a, b;
    char c;
    int f;
    cin >> a >> b >> c >> f;
    if (f == 0) {
        for (int i = 0; i < a; ++i) {
            if (i == 0 || i == a - 1) {
                for (int j = 0; j < b; ++j) {
                    cout << c;
                }
                cout << endl;
            }
            else {
                cout << c;
                for (int j = 1; j < b - 1; ++j) {
                    cout << " ";
                }
                cout << c << endl;
            }
        }
    }
    else {
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}