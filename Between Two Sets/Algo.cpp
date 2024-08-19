int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int g = 0,l = 1, result = 0;
    
    for(int i = 0; i < a_count; i++)
    {
        l = lcm(l,a[i]);
    }
    
    for(int i = 0; i < b_count; i++)
    {
        g = gcd(g, b[i]);
    }
    
    for(int i = l; i <= g; i+=l)
    {
        if(g % i == 0)
            result++;
    }
    
    return result;
}