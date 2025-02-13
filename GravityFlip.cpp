#include <iostream>
#include <algorithm>

using namespace std;

void gravity_flip(int n, int cubes[]) {
    sort(cubes, cubes + n);
}

int main() {
    int n;
    cin >> n;

    int cubes[n];
    for (int i = 0; i < n; ++i) {
        cin >> cubes[i];
    }

    gravity_flip(n, cubes);

    for (int i = 0; i < n; ++i) {
        cout << cubes[i] << " ";
    }
    cout << endl;

    return 0;
}
