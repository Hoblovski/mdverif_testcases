// 可选：让形参作用域也囊括 ensures（ensures 中的形参表示形参初始值）
int f1(int x, int y)
    requires x == 5
    ensures y == 6 --> result == 11
{
    int z;
    z = y;
    z = z + x;
    return x + y;
}

int main()
{ }
