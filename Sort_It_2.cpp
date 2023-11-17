#include<bits/stdc++.h>
using namespace std;
int* sort_it(int size) {
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
 
    sort(arr, arr + size, greater<int>());//descending
    return arr;
}

int main() {
    int N;
    cin >> N;
    int* sortarr = sort_it(N);

    for (int i = 0; i < N; ++i) {
        cout << sortarr[i] << " ";
    }
    delete[] sortarr;

    return 0;
}
