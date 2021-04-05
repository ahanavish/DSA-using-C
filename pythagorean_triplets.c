//pythagorean triplets
#include <stdio.h>
void main()
{
    int i, j, p;
    for(i=1; ; i++)
        for(j=1; j<i; j++)
            for(p=1; p<100; p++)
                if(i*i + j*j == p*p)
                    printf("%d %d %d \n", i, j, p);
}