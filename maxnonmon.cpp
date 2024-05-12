#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    int x=0;
    cin>>N;
    string str;
    cin>>str;
    for(int i=0;i<=N-1;i++){
        if(str[i]=='b'){
            continue;
        }else if(i<N&&str[i+1]=='a'){
            x++;
        }else if(i>0&&str[i-1]=='a'){
            x++;
        }
    }
    cout<<x<<"\n";
}