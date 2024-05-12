#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;  // Leer el número como string
    vector<int> v;
    int cnt=0;
    int aux=0;
    int num = stoi(N);  // Convertir el string N a un entero
    for (char ch : N) {
        int digit = ch - '0';  // Convertir el caracter a su valor numérico
        v.push_back(digit);    // Añadir cada dígito al vector como un entero
    }
    for(int i=0;i<v.size();i++){
        aux=v[i];
        if(aux!=0 && num%aux==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


