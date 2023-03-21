#include <iostream>
#include <cmath>
using namespace std;

void findSubsets(int arr[], int n) {
    int total_subsets = pow(2, n);

    for (int i = 0; i < total_subsets; i++) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findSubsets(arr, n);
    return 0;
}
