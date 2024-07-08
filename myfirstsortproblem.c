#include<stdio.h>

int main(){
    int t;  scanf("%d",&t);
    while(t--){
        int a, b;   scanf("%d %d",&a,&b);
        a>b?printf("%d %d\n",b,a):printf("%d %d\n",a,b);
    }
    return 0;
}