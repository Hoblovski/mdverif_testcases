// 我们的数据类型 int 是 32 位有符号整数所以验证的时候考虑溢出
int add()
    ensures 2147483647 + 2147483647 == -2
{ }

int mul()
    ensures 67789*91322 == 1895659762
{ }