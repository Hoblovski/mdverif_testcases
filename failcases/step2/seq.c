int f1(int a, int b, int c)
    requires a+b == 10
          && a+c == 10
          && b+c == 10
          // 也就是 a==b==c==5
    ensures result == 15
{
    int d=a;
    int e=b;
    int f=c;
    int q = 0;
    int w = 0;
    q = d+e; // 10
    w = e*f; // 25
    return q+w; // 35 != 15
}

int main() {}
