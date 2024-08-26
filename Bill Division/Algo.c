void bonAppetit(int bill_count, int* bill, int k, int b) {
    int sum = 0;
    
    for(int i = 0; i < bill_count; i++)
    {
        if(i != k)
            sum += bill[i];
    }
    sum /= 2;
    
    if(sum >= b)
        printf("Bon Appetit");
    else 
        printf("%d", b - sum);
}