#include <bits/stdc++.h>

using namespace std;


int main(){
    int ascore1, ascore2;
    int pscore1, pscore2;
    int tscorea,tscorep;

    cin>>ascore1>>pscore1;
    cin>>ascore2>>pscore2;

    tscorea=ascore1+ascore2;
    tscorep=pscore1+pscore2;
    
    if(tscorea>tscorep){
        cout<<"A";
    }else if(tscorea<tscorep){
        cout<<"P";
    }else{
        cout<<"D";
    }

}