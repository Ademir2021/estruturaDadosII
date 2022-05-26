#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

int vec[TAM]={10,20,30,40,50,60,70,80,90,101};
int arg;
int tam=10;

int buscaArvoreBinaria(int vec[], int arg, int tam){
int no, achou, fim;
fim = 0;
no = 0;
achou = -1;
while((achou == -1) && (fim <= tam)){
    if(arg == vec[no]){
        achou = no;
    }
    if (arg < vec[no]){
        no = (2 * no ) +1;
    }
    else{
        no = (2 * no) + 2;
    }
    fim++;
}
return(achou);
}

int main(void){

printf("Digite um numero inteiro para buscar: ");
scanf("%d", &arg);

for( int i =0; i<=tam; i++){
int buscaArvoreBinaria(int vec[], int arg, int tam);
}
if(arg <= 10){
printf("\nNumero %d foi encontrado no vetor\n\n", vec[arg]);
}else{
    printf("\nNumero %d não foi encontrado  no vetor\n\n", vec[arg]);
}
    getchar();
    return 0;
}

