#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;  //num of letters
        cin >> n;
        unordered_map<char, int> mapa;//Map to classify coins
        char s; //coin status
        int occ = 0;//occurrences

        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s == 'U') {
             occ++; 
            }
        }
     occ % 2 == 0 ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}
