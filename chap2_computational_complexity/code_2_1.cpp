#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    // * 一重の for 文（O(N)）
    for (int i = 0; i < N; ++i) {
        ++count;
    }
}
