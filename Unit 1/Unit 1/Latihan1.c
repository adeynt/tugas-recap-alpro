#include <stdio.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d %d", &e, &f);

    float v=(float)a/b;
    float s=(float)c*d;
    float t=(float)e/f;

    printf("%.2f\n", v);
    printf("%.2f\n", s);
    printf("%.2f\n", t);
    return 0;
}