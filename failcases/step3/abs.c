int abs(int x)
    // x could be -2147483648
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