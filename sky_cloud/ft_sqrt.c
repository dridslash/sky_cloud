#include <unistd.h>
#include <stdio.h>

int f_sqrt(int nb)
{
	    int i=1;
	        while (i < (nb/i))
			    {
				           i *=i;
					          i++;
						         
						      }
		    
		    return i;
}
int main()
{

	printf("%d",f_sqrt(16));


}
