#include "../list/queue.c"
#include "../lexical/lexical.c"

int readLDB(char* path){
    FILE* file = fopen(path,"r");
    char token[255];
    char line[1000];
    fgets(line,1000,file);
    while(!feof(file)){
        printf("meu token eh: %s \n",line);

        char * pch;
        pch = strtok (line," \n");
        while (pch != NULL)
        {
            Enqueue(pch); Print(); 
            pch = strtok (NULL, " \n");
        }

        fgets(line,1000,file);
    }
    printf("meu token eh: %s \n",line);
    return 1;
}