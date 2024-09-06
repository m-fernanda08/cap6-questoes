#include <stdio.h>
#include <string.h>

void invert_palavras(char sentenca[]){
    char *token = strtok(sentenca, "");

    while(token != NULL){
        int tam = strlen(token);

        for(int i = tam - 1; i >= 0; i--){
            printf("%c", token[i]);
        }

        printf("");

        token = strtok(NULL, "");
    }
}

int main(){
    char sentenca[] = "AMU MEGASNEM ATERCES";
    printf("verdadeira sentença: %s\n", sentenca);
    printf("sentença invertida: ");
    invert_palavras(sentenca);
    return 0;
}