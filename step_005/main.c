#include <stdio.h>

int main()
{
    char c = 'A';
    short s = 0;
    int i = 1;
    long l = 2L;
    float f = 3.4f;
    double d = 5.6;

    printf("char�^  �F%c\n", c);
    printf("short�^ �F%d\n", s);
    printf("int�^   �F%d\n", i);
    printf("long�^  �F%ld\n", l);
    printf("float�^ �F%f\n", f);
    printf("double�^�F%lf\n", d);

    return 0;
}