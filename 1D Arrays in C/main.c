#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, val , sum = 0;
    scanf("%i", &n);
    
    int *arr = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%i", &val);
        arr[i] = val;
    }  

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }   

    printf("%i", sum);
     
    free(arr);
    return 0;
}
