#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    // * 二重の for 文（O(N^2)）
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ++count;
        }
    }
}
