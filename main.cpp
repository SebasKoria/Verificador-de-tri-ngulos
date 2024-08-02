#include <bits/stdc++.h>

using namespace std;

int main()
{
    printf("Ingrese los tres lados del triangulo separados por un espacio:\n");

    set<int> lados;
    int l[3];
    for(int i=0;i<3;i++){
        scanf("%d", &l[i]);
        lados.insert(l[i]);
    }

    bool existe = true;
    existe &= (l[0] + l[1]) > l[2];
    existe &= (l[0] + l[2]) > l[1];
    existe &= (l[1] + l[2]) > l[0];

    if(existe){
        switch((int)lados.size()){
            case 1: printf("Equilatero\n"); break;
            case 2: printf("Isoceles\n"); break;
            case 3: printf("Escaleno\n"); break;
        }
    }
    else printf("El triangulo no existe\n");

    return 0;
}
