#include <stdio.h>
#include <complex.h>

// Complex numbers in C,written by Nikos Mouzakitis,April 2016.

void quadrant_print(double complex *z)
{
        if(creal(*z) > 0 && cimag(*z) > 0)
                printf("complex number belongs t0 first quadrant.\n");
        else if( creal(*z) < 0 && cimag(*z) > 0)
                printf("complex number belongs to second quadrant.\n");
        else if( creal(*z) < 0 && cimag(*z) < 0)
                printf("complex number belongs to third quadrant.\n");
        else if(creal(*z) > 0 && cimag(*z) < 0 )
                printf("complex number belongs to fourth quadrant.\n");
        else if(creal(*z) == 0 && cimag(*z) != 0 )
                printf("complex number belongs to y - axis.\n");
        else if(creal(*z) != 0 && cimag(*z) == 0)
                printf("complex number belongs to x - axis.\n");
        else
                printf("Complex number is the intersection of the axes(xy).POINT ZERO.\n");


}


double complex adjoint(double complex *z)
{
        double complex adj;
        double r,i;


        r = creal(*z);
        i =  cimag(*z);
        adj = r - i*I ;


        return adj ;

}



int main(int argc,char *argv[])
{


        double r1,im1;

        printf("Enter real part:\n");
        scanf("%lf",&r1);
        printf("Enter imaginary part:\n");
        scanf("%lf",&im1);

        double complex z = r1 +im1 *I ,*zp;
        double complex adj_z;
        zp = &z ;

        printf("Complex number:(%.1f)+(%.1f)i\n",creal(z),cimag(z));
        printf("Absolute value: %.1f\n",cabs(z));
        quadrant_print(zp);
        adj_z = adjoint(zp);
        printf("Adjoint of complex is : (%.1f) + (%.1f)i\n",creal(adj_z),cimag(adj_z));


        return 0;

}
