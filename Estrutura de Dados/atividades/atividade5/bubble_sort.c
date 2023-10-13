#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void bubble_sort(char *arr[], int n){
    int x,y,r;
    char aux[100];
    for(x = 0; x < n; x++){
        for(y = x+1; y < n; y++){
            r = strcmp(arr[x], arr[y]);
            if(r > 0){
                strcpy(aux, arr[x]);
                strcpy(arr[x], arr[y]);
                strcpy(arr[y], aux);
            }
        }
    }
}