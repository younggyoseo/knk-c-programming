#define N = 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
    int a[N], i, j, k, m;
    
#ifdef N
    i = j;
#else
    j = 1;
#endif
    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j))
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));
    
#undef SQR
    i = SQR(j);
#define SQR
    i = SQR(j);
    
    return 0;
}
