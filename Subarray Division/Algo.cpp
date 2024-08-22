 int summer(vector<int>& sub, int m)
 {
     int sum = 0;
     
     for(int i = 0; i < m; i++)
     {
         sum += sub[i];
     }
     return sum;
 }

int birthday(vector<int> s, int d, int m) {
    int count = 0, sum = 0;
    
    if(s.size() == 1)
        return 1;
        
    for(int i = 0; i <= s.size() - m; i++)
    {
        vector<int> subvector = {s.begin() + i, s.begin() + i + m};
        sum = summer(subvector, m);
        
        if(sum == d)
            count++;
    }
    
    return count;
}