vector<int> breakingRecords(vector<int> scores) {
    vector<int> result = {0, 0};
    int min = 0, max = 0;
    
    for(int i = 0; i < scores.size(); i++)
    {
        if(i == 0)
        {
            min = max = scores[i];
            continue;
        }
        
        if(scores[i] > max)
        {
            max = scores[i];
            result[0]++;
        }
        
        if(scores[i] < min)
        {
            min = scores[i];
            result[1]++;
        }
    }
    
    return result;
    
}