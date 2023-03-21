#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nt = 0,ga;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The Fibonacci series: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
        
        cout << nt << ", ";
    }
     cin>>ga;
    return 0;
}
