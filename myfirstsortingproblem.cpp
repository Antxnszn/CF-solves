#include<bits/stdc++.h>
#define tonoto ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
using namespace std;

int main(){
    tonoto
    int t;  cin>>t;
    while(t--){
        int a, b;   cin>>a>>b;
        a>b?cout<<b<<" "<<a<<"\n":cout<<a<<" "<<b<<"\n";
    }
}