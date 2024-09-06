#include <stdio.h>
#include <stdlib.h>

/* Para remover o elemento da pilha */

int pop(int p[], int *t){
    if (*t < 0){
        printf("pilha vazia, não é possível remover.\n");
        return -1;
    }else{
        int element = p[*t];
        (*t)--;
        return element;
    }
}

/* Para inserir um elemento */
void push(int p[], int *t, int element, int tam_max){
    if (*t == tam_max - 1){
        printf("a pilha está cheia, não é mais possível inserir.\n");
    }else{
        (*t)++;
        p[*t] = element;
    }
}