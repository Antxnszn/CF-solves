#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a; //array of sticks
        cin >> a;
        vector<int> n(a); //sticks length
        unordered_map<int, int> freq; // Contador de frecuencia con unordered_map
        for(int i = 0; i < a; i++){
            cin >> n[i];
            freq[n[i]]++;
        }
 
        // Contar cuántos números se repiten más de tres veces
        int trios = 0;
        for(auto& pair : freq){
            trios += pair.second / 3; // Agregamos el número de tríos que podemos formar con la frecuencia actual
        }
        cout << trios << endl;
    }
}