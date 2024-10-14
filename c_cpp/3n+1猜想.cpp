#include <iostream>  
using namespace std;

int main() {
    int n, idx = 0;
    cin >> n;
    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
        }
        else {
            n = n / 2;
        }
        idx++;
        cout << "µÚ" << idx << "²½: " << n << endl;
    }
    return 0;
}