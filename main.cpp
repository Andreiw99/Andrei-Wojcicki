#include <iostream>
#include <stdio.h>
#include "functii.h"
using namespace std;




int main()
{
    struct nr_complex a,b,z;
    scanf("%f", &a.re);
    scanf("%f", &a.im);
    scanf("%f", &b.re);
    scanf("%f", &b.im);
    z = impartire (a,b);
    printf("%f + %fi", z.re,z.im);
    return 0;
}
