#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int  nb)
{
	    int i=1;
	        int fac=1;
		    if (nb < 0)
			        {
					        return 0;
						    }
		        while(i <= nb)
				    {

					            fac=fac * i;
						            i++;
							        }

			return fac;
}
int main ()
{

	printf("%d",ft_iterative_factorial(0));


}
