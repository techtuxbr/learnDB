#include "../list/queue.c"
#include "../lexical/lexical.c"
#include "verbs.c"

int readLDB(char* path){
    startStack();
    char token[255];
    char line[1000];
    strcpy(line,path);
    printf("minha linha eh: %s \n",line);
    char * pch;
    pch = strtok (line," \n(){},");
    while (pch != NULL)
    {
        Enqueue(pch); Print();
        pch = strtok (NULL, " \n(){},");
    }
    Dequeue(token);
    if(isExpressionHeader(token)){
        if(!strcmp(token,"CRIAR")){
            Dequeue(token);
            create(token,front,rear);
        }
    }else{
        printf("\n ERR:001 Expressão invalida, nao eh um verbo \n");
    }
    return 1;
}