#include <stdio.h>

int main()
{
    int o, t, th, fr, fv, sx;
    scanf("%d %d %d %d %d %d", &o, &t, &th, &fr, &fv, &sx);
    int y = 2 * (t + fv + sx);
    int n = 3 * (th + fr);
    printf("%d",o+y+n);
    return 0;
}