#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *direita, *esquerda;
}NoArv;

NoArv* inserir(NoArv *raiz, int num){
    if(raiz == NULL){
        NoArv *aux = malloc(sizeof(NoArv));
        aux->valor = num;
        aux->esquerda = NULL;
        aux->direita = NULL;
        return aux;
    }
    else{
        if(num < raiz->valor)
            raiz->esquerda = inserir(raiz->esquerda, num);
        else
            raiz->direita = inserir(raiz->direita, num);
        return raiz;
    }
}

void menuOpcoes(){
    printf("Menu de Opções\n");
    printf("1 - Inserir Valor\n");
    printf("2 - Imprimir Pré-Ordem\n");
    printf("0 - Sair\n");
}



void preOrdem(NoArv *raiz){
    if(raiz != NULL){
        printf("%d - ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}


int main(){

    NoArv *raiz = NULL;
    int opcao, valor;

    do{
        menuOpcoes();
        scanf("%d", &opcao);
        
    switch(opcao){
        case 1:
            printf("\n\tDigite um valor: ");
            scanf("%d", &valor);
            system("clear");
            raiz = inserir(raiz, valor);
            break;
        case 2:
            system("clear");
            printf("\n\tImpressao Pré-Ordem:\n\t");
            preOrdem(raiz);
            printf("\n");
            break;
        default:
            if(opcao != 0);
                system("clear");
                printf("\n\tOpcao invalida!!!\n");
        }

    }while(opcao != 0);

    return 0;
}