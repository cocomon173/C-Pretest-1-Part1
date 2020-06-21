#include <iostream>

using namespace std;

int main()
{
    int a = 0,b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    a += 100;
    b %= 10;
    printf("%d\n", a);
    printf("%d", b);

    return 0;
}
