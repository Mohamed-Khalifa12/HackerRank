#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    scanf("%s", str);
    int count[10] = {0};
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] - '0' >= 0 && str[i] - '0' <= 9)
            count[str[i] - '0']++;
    }  
    
    for(int i = 0; i < 10; i++)
    {
        printf("%i ", count[i]);
    }
    
    return 0;
}
