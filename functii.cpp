#include "functii.h"
#include <stdio.h>

struct nr_complex impartire (struct nr_complex a, struct nr_complex b)
{
    struct nr_complex z;
    z.re = (a.re * b.re + a.im * b.im) / ((b.re * b.re) + (b.im * b.im));
    z.im = (b.re * a.im - a.re * b.im) / ((b.re * b.re) + (b.im * b.im));
    return z;
}
