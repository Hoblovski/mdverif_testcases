int f1(int a, int b)
    ensures result == 0
{
    int c;
    int d;
    int e;
    e=a+a;
    d=a*2;
    c=e;
    return c-d;
}

int main()
{ }
