#include<bits/stdc++.h>

using namespace std;

int main(){
   int Q;
   cin>>Q;
    while(Q--){
        int N, T;
        int temp, remain,reloj=0;
        cin>>N>>T;//N cuckoo clocks
                //T is the time that grandma returns
        if(T==1){
            reloj=N;
        }else{
            vector<int> v(N);
   
            for(int i=0;i<N;i++)v[i]=i+1;
            for(int i=N;i>0;i--){
               if(v[i]<=T){
                    temp=1+i;
                   remain=T-temp;
                   
                    if(remain%i==0){
                         reloj++;
                    }
                           
            }
        }
        cout<<reloj<<endl;
   }
    }
    
    return 0;
}