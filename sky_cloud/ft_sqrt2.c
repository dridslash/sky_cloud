#include <unistd.h>
#include <stdio.h>
#include <math.h>
int ft_sqrt(int nb)
{
	    int count=0;
	        int nbp=1;
		    int track=0;
		        if(nb < 0)
				      return 0;
			    while(nb != 0)
				        {
						      nb = nb - (nbp);
						            nbp +=2;
							          track=nb;
								        if(track < 0 )
										        return 0;
									      count ++;
									          }
			        return count;
}


int main()
{

	  printf("%d",ft_sqrt(25));

}
