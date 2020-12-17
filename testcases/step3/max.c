int max(int x, int y)
    ensures (result == x || result == y) && result >= x && result >= y
{
    if (x > y) return x; else return y;
}