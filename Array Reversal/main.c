#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y);
void reverse(int num, int* arr);

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    reverse(num, arr);
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

void reverse(int num, int* arr){
    for(int i = 0; i < num/2; i++){
        swap(&arr[i], &arr[num - i - 1]);
    }
}

void swap(int* x, int* y){
    int z = *x;
    *x = *y;
    *y = z;
}