#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i;
	double interval,a,b;
	for(i=0;i<60;i++)
	{
		a=sin(interval);
		b=fabs(a); //for integers we use abs() and for floting nos use fabs()...
		interval=i/10.0;
	    printf("sin(%lf)=%f\t",interval,a);
		printf("abs(%lf)=%f\n",a,b);
		
	}
	printf("\n+++++++\n");
	return 0;
}

 
   
