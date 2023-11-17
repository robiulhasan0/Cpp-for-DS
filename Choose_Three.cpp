#include <bits/stdc++.h>
using namespace std;

bool Sum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[i] + arr[j] + arr[k] == targetSum) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (Sum(A, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
