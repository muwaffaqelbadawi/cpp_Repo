

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int *p;
    p = new int;
    *p = 10;
    delete p;
    p = new int[20];
    delete[] p;
}