#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Constantes
#define tamanho 10

//Váriaveis
int lista [tamanho];
int ordenado [tamanho];
int opt = -1;
int qtd;

//Prototipação
void menu_mostrar(void);
void lista_mostrar(void);
void lista_gerar(void);
void lista_ler(void);
void lista_limpar(void);
void lista_mostrar_ordenado(void);
int bubbleSort(int vec[]);
void troca(int* a, int* b);
int selectionSort(int vec[], int tam);
int insertionSort(int vec[], int tam);
int shellSort(int vec[], int tam);
int mergeSort(int vec[], int tam, int qtd);
void junta(int vec[], int tam);

//Função principal
int main(){
     qtd=0;
    srand(time(NULL));
    do {
        system("clear");
        lista_mostrar();
        lista_mostrar_ordenado();
        menu_mostrar();
        scanf("%d", &opt);
        switch (opt){
            case 1:
            lista_gerar();
            lista_limpar();
            break;
            case 2:
            lista_ler();
           lista_limpar();
            break;
            case 3:
            lista_limpar();
            break;
            case 4:
            qtd = bubbleSort(ordenado);// 1
            break;
            case 5:
            qtd = selectionSort(ordenado, tamanho);// 2
            break;
            case 6:
            qtd = insertionSort(ordenado, tamanho);// 3
            break;
            case 7:
            qtd = shellSort(ordenado, tamanho);// 4
            break;
            case 8:
            qtd = mergeSort(ordenado, tamanho, qtd);// 5
            break;
        }
    }while(opt !=0);
    getchar();
    return 0;
}

void lista_mostrar(void){
    printf("[ ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", lista[i]);
    }
    printf("]\n\n");
}

void menu_mostrar(void){
    printf("1 - Gerar lista aleatoriamente\n");
    printf("2 - Criar lista manualmente\n");
    printf("3 - Limpar a Lista\n");
    printf("4 - Aplicar BubbleSort\n");
    printf("5 - Aplicar SelectionSort\n");
    printf("6 - Aplicar InsertionSort\n");
    printf("7 - Aplicar ShellSort\n");
    printf("8 - Aplicar mergeSort\n");
    printf("0 - Sair...\n\n");
}

//Gera lista aleatoriamente
void lista_gerar(){
    for (int i = 0; i < tamanho; i++){
        lista[i] = rand()%50;
    }
}

//Permite que o usuário entre com os valores da lista
void lista_ler(void){
    for (int i = 0; i < tamanho; i++){
        system("clear");
        lista_mostrar();
        printf("\nDigite o valor para a posição %d: ", i);
        scanf("%d", &lista[i]);
    }
}

//Prepara lista para ordenação
void lista_limpar(void){
    for (int i =0; i < tamanho; i++){
        ordenado[i] = lista[i];
    }
}

//Mostra o conteúdo da lista ordenada
void lista_mostrar_ordenado(void){
    printf("[ ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", ordenado[i]);
    }
    printf("] Tempo = %d iterações\n\n", qtd);
}

//Aplica o método bubbleSort
int bubbleSort(int vec[]){
    //int qtd;
    int i, j, tmp;
    qtd = 0;
    for(i = 0; i < tamanho -1; i++){
        for (j = i+1; j < tamanho; j++){
            if (lista[i] > lista[j]){
                troca(&lista[i], &lista[j]);
            }
            qtd++;
        }
    }
    return(qtd);
}
//Função genérica de troca de valores
void troca(int* a, int* b){
    int tmp;
    tmp = *a;
    *a =  *b;
    *b = tmp;
}

//Aplica o modo selectSort
int selectionSort(int vec[], int tam){
    int i, j, min, qtd=0;
    for (i = 0; i < (tam -1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++){
            if(vec[j] < vec[min]){
                min = j;
            }
            qtd++;
        }
        if(i != min){
            troca(&vec[i], &vec[min]);
        }
    }
    return(qtd);
}

//Aplicando o InsertionSort
int insertionSort(int vec[], int tam){
    int i, j, qtd=0;
    for (i = 1; i < tam; i++){
        j = i;
        while((vec[j] < vec[j -1]) && (j!=0)){
            troca(&vec[j], &vec[j-1]);
            j--;
            qtd++;
        }
    }
    return(qtd);
}

//Aplica o shellSort
int shellSort(int vec[], int tam){
    int i, j, valor, qtd=0;
    int gap = 1;
    do{
        gap = 3*gap+1;
    }while (gap < tam);
    do{
        gap/= 3;
        for(i = gap; i <tam; i++){
            valor = vec[i];
            j = i - gap;
            while (j >= 0 && valor < lista[j]){
                vec[j + gap] = vec[j];
                j -= gap;
                qtd++;
            }
            vec[j + gap] = vec[j] = valor;
        }
    }while (gap > 1);
    return (qtd);
}

//Aplica o mergeSort
int mergeSort(int vec[], int tam, int qtd){
    int meio;

    if(tam > 1){
        meio = tam / 2;
        qtd = mergeSort(vec, meio, qtd);
        qtd = mergeSort(vec + meio, tam - meio, qtd);
        junta (vec, tam);
    }
    return(qtd+1);
}
//Junta os pedaços num novo vetor ordenado
void junta(int vec[], int tam){
    int i, j, k;
    int meio;
    int* tmp;

    tmp = (int*) malloc(tam * sizeof(int));
    if(tmp == NULL){
        exit(1);
    }

meio = tam / 2;
i = 0;
j = meio;
k = 0;

while(i < meio && j < tam){
    if (vec[i] < vec[j]){
        tmp[k] = vec[i];
        ++i;
    }
    else{
        tmp[k] = vec[j];
        ++j;
    }
    ++k;
}

if(i == meio){
    while(j < tam){
        tmp[k] = vec[j];
        ++j;
        ++k;
    }
}
else{
    while(i < meio){
        tmp[k] = vec[i];
        ++i;
        ++k;
    }
}

for(i = 0; i < tam; ++i){
    vec[i] = tmp[i];
    }
    free(tmp);
}
