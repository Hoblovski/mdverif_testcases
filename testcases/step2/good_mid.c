// 用关键字 result 表示返回值
int mid_good(int l, int r)
    requires l >= 0
    requires l <= r
    ensures l <= result && result <= r
{
    return l + (r - l) / 2;
}

int main() {}
