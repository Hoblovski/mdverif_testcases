int f1()
    ensures 1==2
{ }

int f2()
    ensures ! (1==1)
{ }

int f3()
    ensures 1==1 && 1==2
{ }

int f4()
    ensures 1==1 --> 1==2
{ }
