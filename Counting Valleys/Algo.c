int countingValleys(int steps, char* path) {
    int result = 0, level = 0;
    for(int i = 0; i < steps; i++)
    {
        if(path[i] == 'U')
        {
            level++;
            if(level == 0)
                result++;
        }
        else if(path[i] == 'D')
            level--;
    }
    return result;
}