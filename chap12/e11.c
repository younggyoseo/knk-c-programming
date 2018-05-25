int find_largest(int a[], int n)
{
    int *p;
    int max;
    
    max = *a;
    for (p = a; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}
