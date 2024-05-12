#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    //Obtenedremos el minimo faltante en el arreglo 
        // Encontrar el máximo de a
        int maxsize = *max_element(a.begin(), a.end());

        // Ordenar el arreglo para calcular el MEX
        sort(a.begin(), a.end());

        // Calcular el MEX. Es un valor que nos permite calcular 
        int mex = 1;
        for (int sz : a) {
            if (sz == mex) {
                mex++;
            }
        }

        // Determinar el ganador basado en la paridad de maxsize o mex
        if (mex > maxsize) {
            cout << (maxsize % 2 == 1 ? "Alice" : "Bob") << endl;
        } else {
            cout << (mex % 2 == 1 ? "Alice" : "Bob") << endl;
        }
    }
    return 0;
}
