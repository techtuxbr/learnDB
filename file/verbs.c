#include <string.h>
void create(char* what,struct Node* f, struct Node* r){
    front = f;
    rear = r;
    if(!strcmp(what,"BANCO")){
        char nome[255];
        Dequeue(nome);

        if(!isKeyword(nome) && !isExpressionHeader(nome) && !isInteger(nome) && !isRealNumber(nome)){
            if(isString(nome)){
             printf("\nVc quer criar um banco com o nome de: %s\n",nome);   
            }else{
             printf("Erro 003 %s nao eh uma string valida",nome);   
            }
        }else{
            printf("Erro 002 %s nao eh um nome para banco valido",nome);
        }
    }else{
        printf("\nVc quer criar outra coisa\n");
    }
}