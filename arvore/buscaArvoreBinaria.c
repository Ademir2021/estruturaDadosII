#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 10
    
    int vec[TAM]={3,1,8,7,20,21,31,40,30,0};

int buscaArvoreBinaria(int vec[],int  arg,int  tam){
int no, achou, fim;
fim = 0;
no = 0;
achou = -1;
while((achou == -1) && (fim <= TAM)){
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

    //Imprementar

    return 0;
}