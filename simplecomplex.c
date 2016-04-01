#include <stdio.h>
#include <complex.h>

int main(int argc,char *argv[])
{

        double complex z = 3 + 4*I ;

        printf("Complex number:%.1f + %.1f i\n",creal(z),cimag(z));
        printf("Absolute value of complex number is: %.1f\n",cabs(z));



        return 0;
}
