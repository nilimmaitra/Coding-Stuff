#include <iostream>
#include <string>
using namespace std;

void string_check(string &x) {
    cout << "Enter the string made up from the set of [a, b]:\n";
    cin >> x;
    if (x.length() == 1 && (x[0] == 'a' || x[0] == 'b')) {
        cout << "Language 1: [a, b]" << endl;
    } else if (x.length() == 3 && x.find('a') != string::npos && x.find('b') != string::npos) {
        cout << "Language 2: [a, b]*3" << endl;
    } else if (x.length() >= 4 && x[0] == 'a') {
        cout << "Language 3: [a, aa, aaab, abab, ...]" << endl;
    }
}

int main() {
    string x;
    string_check(x);
    return 0;
}
