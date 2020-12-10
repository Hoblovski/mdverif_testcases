// 用关键字 result 表示返回值
int mid_bad(int l, int r)
    requires l <= r
    ensures l <= result && result <= r
{
    return l + (r-l)/2;
}

int main() {}
