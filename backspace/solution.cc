#include <iostream>

using namespace std;

int main() {
    char in[1000000];
    char out[1000000];

    cin >> in;

    int out_idx = 0;
    for (int idx = 0; idx < 1000000; ++idx) {
        if (in[idx] == '<') out_idx--;
        else out[out_idx++] = in[idx];
    }

    out[out_idx] = '\0';
    cout << out << '\n';
    return 0;
}
