#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, p;//n array lenght
    cin>>n>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max;
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        if(a[i]>p){
            continue;
        }
        if(a[i]<=p){
            max=a[i];
            cout<<max;
            return 0;
        }
    }
    return 0;
}