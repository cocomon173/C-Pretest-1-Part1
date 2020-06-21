#include <iostream>

using namespace std;
int main()
{
    int a = 0,b = 0;
    scanf("%d %d", &a, &b);
    a++;
    --b;
    printf("%d %d %d", a, b, (a-1) * b);

    return 0;
}
