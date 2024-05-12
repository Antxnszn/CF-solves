#include <bits/stdc++.h>

using namespace std;

int main() {
    int tam;
    cin>>tam;
    cin.ignore(tam);
    string ws;
    string words;
    bool W_words;
    int noW_count = 0;
    getline(cin, ws);

    istringstream iss(ws);
    

    unordered_map<string, int> index;

    while (iss >> words) {
        W_words = words.find('w') != string::npos;
        if (!W_words) {
            noW_count++;
            index[words]++;
        }
    }

    cout <<noW_count<< endl;

   
    return 0;
}
