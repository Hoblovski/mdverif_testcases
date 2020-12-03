int f1(int x)
    requires x==10
    ensures result+1==11
{
    return x;
}

// 如果越界了呢
int f2(int x)
    requires x>=10
    ensures result>=11
{
    return x+1;
}
