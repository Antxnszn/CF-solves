#include <bits/stdc++.h>


using namespace std;


int verificarDigitos(int numero) {
    vector<int> vtmp;

    for(float &a:numero){

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        float x;
        cin>>x;
        float div;
        div=x/2;
        float tmp1, tmp2;
        tmp1=ceil(x);
        tmp2=floor(x);
        if(tmp1==tmp2){
            tmp1++;
            tmp2--;
        }
    
    int valid1= verificarDigitos((float)tmp1);
    int valid2= verificarDigitos((float)tmp2);
        if(valid1==valid2){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }


}