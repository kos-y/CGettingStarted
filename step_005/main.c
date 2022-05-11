#include <stdio.h>

int main()
{
    char c = 'A';
    short s = 0;
    int i = 1;
    long l = 2L;
    float f = 3.4f;
    double d = 5.6;

    printf("charå^  ÅF%c\n", c);
    printf("shortå^ ÅF%d\n", s);
    printf("intå^   ÅF%d\n", i);
    printf("longå^  ÅF%ld\n", l);
    printf("floatå^ ÅF%f\n", f);
    printf("doubleå^ÅF%lf\n", d);

    return 0;
}