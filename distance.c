#include <stdio.h>
#include <math.h>
#include <complex.h>
#define PI 3.14159265

/* Complex numbers program in C,written by Nikos Mouzakitis,April 2016.
*/
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

double distance(double complex *z1,double complex *z2)
{
        double dist ; // distance between the two complex numbers(z1,z2)

        dist = sqrt( pow(creal(*z2) - creal(*z1),2.0) + pow( cimag(*z2) - cimag(*z1),2.0));

        return dist;
}

int main(int argc,char *argv[])
{

        double dist ;
        double r1,im1;
        double r2,im2;
        double complex z,z2,*zp,*zp2,adj_z ;

        printf("First complex number(z1).\n");
        printf("Enter real part:\n");
        scanf("%lf",&r1);
        printf("Enter imaginary part:\n");
        scanf("%lf",&im1);

        //first complex.

        printf("Second complex number(z2)\n");
        printf("Enter real part:\n");
        scanf("%lf",&r2);
        printf("Enter imaginary part:\n");
        scanf("%lf",&im2);
        // second complex.
        z = r1 + im1 *I;
        z2= r2 + im2*I;
        zp = &z ;
        zp2 = &z2;
      
        dist = distance(zp,zp2);
        printf("Distance of (z1,z2): %.3f \n",dist);
        
        return 0;
}
