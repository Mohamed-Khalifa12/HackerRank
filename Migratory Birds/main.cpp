int migratoryBirds(vector<int> arr) {
    int birdCount[5] = {0}, max = 0, index = 0;
    int arr_count = arr.size();
    
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
