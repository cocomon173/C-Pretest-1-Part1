#include <iostream>

using namespace std;

int main()
{
    int a = 0,b = 0;
    scanf("%d %d", &a, &b);
    printf("%d > %d ---%d\n",a,b, a > b ? 1 : 0);
    printf("%d < %d ---%d\n",a,b, a < b ? 1 : 0);
    printf("%d >= %d ---%d\n",a,b, a >= b ? 1 : 0);
    printf("%d <= %d ---%d",a,b, a <= b ? 1 : 0);

    return 0;
}

