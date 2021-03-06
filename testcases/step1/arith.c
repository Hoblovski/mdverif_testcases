int f1()
    ensures 1 == 1
{ }

int f2()
    ensures 100+2 == 102
{ }

int f3()
    ensures 3*(100+2) == 306
{ }

int f4()
    ensures 3*(100+2) % 101 == 3
{ }

int f5()
    ensures 3*(100+2) % 101 == 3 && 608*123-1234/23 == 74731
{ }

// --> 只出现在 ensures/requires 中表示逻辑蕴涵
// 逻辑与或非就用 && || ! 了，优先级结合性照旧
int f6()
    ensures 1 == 1 --> 3*(100+2) % 101 == 3 && 608*123-1234/23 == 74731
{ }

// --> 是右结合的，优先级低于 ||
int f7()
    ensures 1 == 1 --> 2 > 0 --> 7 + 1 == 8
{ }

// 如果前提为假，那么蕴涵式一定为真
int f8()
    ensures 2 == 2 && ! (2 <= 2) --> 7 + 1 == 7
{ }

// result 表示返回值
int f9()
    ensures result +10 == 243
{
    return 233;
}

int main()
{ }
