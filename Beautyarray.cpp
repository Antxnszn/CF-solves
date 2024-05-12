#include<bits/stdc++.h>



using namespace std;

void quicksort(vector <int> &A, int primero,int ultimo) //Funcion para ordenar mi arreglo
{
    int mitad,i,j;
    int pivote;
    mitad=(primero+ultimo)/2;
    pivote=A[mitad];
    i=primero;
    j=ultimo;
    do
        {
            while(A[i]<pivote) i++; //Modificacion para ordenar el vector de mayor a menor
            while(A[j]>pivote) j--;
            if(i<=j)
            {
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                i++;
                j--;
            }
        } while(i<=j);
        
    if(primero<j)
        quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
    if(i<ultimo)
        quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}

//Funcion para la suma maxima del arreglo para a_i-a_i-1
void sum_max(vector <int> &A,int primero, int ultimo){
    int smax=0;
    smax=A[ultimo]-A[primero];
    cout<<smax<<endl;
}




int main(){
     //Nota, las variables a_1, a_2,...,a_n, se modificaran a a_0,a_1,...,a_n-1
    int n; //Longitud del arreglo
    int n_tests=0;
    int j=0;
    cin>> n_tests;
    do{
    cin>> n;
    vector<int> a(n); //Vector como equivalente a mi array
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    quicksort(a, 0,n-1); 
    sum_max(a,0,n-1);
    j++;
    }while(j<n_tests);

    
}
    
    
