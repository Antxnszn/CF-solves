#include<bits/stdc++.h>


using namespace std;
       /*
            Dado que nuestra condicion quiere verificar si tanto el amigo i y p_i, como el amigo
            j y p_j, sean invitados en dos iteraciones seguidas, por ejemplo, en el probkema nos dan
            el input 3 1 2 5 4, esto representa a mi vector de amigos p_i, e i lo podemos representar
            como un segundo vector llenado por los indices ajustados para que i inicie desde 1
            Entonces, lo que tendria que pasar es 
            3 1 2 5 4 
            1 2 3 4 5
            Nota que i=1 recibe invitacion e invita al p[1]=3, luego la siguiente iteracion donde 2
            invita a 1, luego 3 invita a 2, pero en la 4ta iteracion vemos que el 4 invita al
            5, y luego el 5 recibe e invita al 4, entonces aqui ya invito a los dos, concluimos
            que necesita solamente 2 invitaciones 
            
            Justificacion
            p_i != i
            Para que necesitemos solo dos invitaciones, se tiene que cumplir que
            p_i=j && p_j=i
            entonces
            p[p_i] != j
            pero p[p[i]]=i=p[j], 
            quiere decir que el ultimo i, tuvo que tener una invitacion en la siguiente
            iteracion para que solo se necesiten 2

            */




int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1); // Incrementamos el tamaño del vector en 1

        for (int i = 1; i <= n; i++) { // Comenzamos desde 1
            cin >> p[i];
        }

        int inv = 3;
        for (int i = 1; i <= n; i++) { // Comenzamos desde 1
            if (p[p[i]] == i)
                inv = 2;
        }
            cout << inv << endl;
    }

    return 0;
}
