int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int *p, sum = 0;
    
    for (p = a; p < a + n * LEN; p++)
        sum += *p;
    
    return sum;
}
