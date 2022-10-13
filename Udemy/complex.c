/****************************************************************************************************************************
Date: 5/5/2022
Auther: Mohamed Khalid Anis
Program: This program uses the complex numbers in C99 to do basic operation
*****************************************************************************************************************************/
#include <stdio.h>
#include <complex.h>
#include <math.h>
void main()
{
    /* task 1 */
    double complex num1 = I*I;
    printf("%.2lf + %+.2lfi \n",creal(num1),cimag(num1));
    /* task 2 */
    double complex num2 = pow(I,2);
    printf("%.2lf + %+.2lfi \n",creal(num2),cimag(num2));
    /* task 3 */
    double PI= acos(-1);
    double complex num3 = PI*I;
    printf("%.2lf + %+.2lfi \n",creal(num3),cimag(num3));
    /* task 4 */
    double complex num4 = 1+2*I;
    printf("%.2lf + %+.2lfi",creal(conj(num4)),cimag(conj(num4)));
}