#include "stdio.h"


int migratoryBirds(int arr_count, int* arr);

int main()
{
    int arr[6] = {1, 4, 4, 4, 5, 3};
    int result = migratoryBirds(6, arr);
    printf("%d", result);
}

int migratoryBirds(int arr_count, int* arr) {
    int birdCount[5] = {0}, max = 0, index = 0;
    for(int i = 0; i < arr_count; i++)
        birdCount[arr[i]-1]++;
        
    for(int i = 0; i < 5; i++)
    {
        if(birdCount[i] > max)
        {
            max = birdCount[i];
            index = i;
        }
    }
    
    return index + 1;
}