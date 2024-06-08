#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    if (n == 1) {
        cout << "Alicius" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Encontrar el máximo elemento en el arreglo
    int maxsize = *max_element(a.begin(), a.end());

    // Usar un vector de booleanos para rastrear la presencia de elementos
    vector<bool> present(maxsize + 1, false);

    for (int i = 0; i < n; i++) {
        if (a[i] <= maxsize) {
            present[a[i]] = true;
        }
    }

    // Encontrar el MEX (Minimum Excludant)
    int mex = 1;
    while (mex <= maxsize && present[mex]) {
        mex++;
    }

    // Determinar el ganador basado en la paridad de maxsize o mex
    if (mex > maxsize) {
        cout << (maxsize % 2 == 1 ? "Alicius" : "Bobius") << endl;
    } else {
        cout << (mex % 2 == 1 ? "Alicius" : "Bobius") << endl;
    }

    return 0;
}
