 int summer(int* arr, int m)
{
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int birthday(int s_count, int* s, int d, int m) {
    int sum = 0, count = 0;
    
    if(s_count == 1)
        return 1;
    
    for(int i = 0; i <= (s_count - m); i++)
    {
        sum = summer((s+i), m);
        if(sum == d)
            count++;
    }
    
    return count;
}
