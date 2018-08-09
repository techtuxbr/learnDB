#include <stdio.h>
#include <stdlib.h>
#include "file/file.h"

int main(){
    char token[255];

    do{
        printf("\b");
        fgets(token,255,stdin);
        readLDB(token);
    }while(strcmp(token,"fechar"));

    /* 
    Enqueue("CRIAR"); Print(); 
    Enqueue("BANCO"); Print();
	Enqueue("\"ufersa\""); Print();
	Dequeue(token);  Print();;
    printf("\nToken que eu peguei: %s\n",&token);
	Enqueue(";"); Print();
    return 0;*/
}