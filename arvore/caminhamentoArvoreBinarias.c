#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");

    getchar();
    return 0;
}

// //Percurso Pré Ordem //F,B,A,D,C,F,G,I,H
// void preOrdem(struct NO* raiz){
//     if(raiz){
//         printf("%d\t", raiz->dado); //visita o nó atual
//         preOrdem(raiz->esq);
//         preOrdem(raiz->dir);
//     }
// }

// //Percurso Em Ordem //A,B,C,D,E,F,G,H,I
// void emOrdem(NO* raiz){
//     if(raiz){
//         emOrdem(raiz->esq);
//         printf("%d \t", raiz->dado); //visita o nó atual
//         emOrdem(raiz->dir);
//     }
// }

// //Percurso Pós Ordem //A,C,F,D,B,H,I,G,F
// void posOrdem(NO* raiz){
//     posOrdem(raiz->esq);
//     posOrdem(raiz->dir);
//     printf("%d \t", raiz->dado); //visita o nó atual
// }


