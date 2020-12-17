int abs(int x)
    requires x >= -2147483647
    ensures result >= 0 && (result == x || result == -x)
{
    if (x >= 0)
    {
        return x;
    } else
    {
        return -x;
    }
}