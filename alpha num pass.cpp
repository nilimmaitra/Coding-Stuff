#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generatePassword(int n) {
    const string charset = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    srand(time(NULL));
    string password;
    for (int i = 0; i < n; i++) {
        password += charset[rand() % charset.size()];
    }
    return password;
}

int main() {
    int n;
    cout << "Enter password length: ";
    cin >> n;
    cout << "Generated password: " << generatePassword(n) << endl;
    return 0;
}
