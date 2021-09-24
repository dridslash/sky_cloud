#include <unistd.h>
#include <stdio.h>
void	put(char	c)
{
		write(1, &c, 1);
}

	

void	ft_putnbr(int	nb )
{
		unsigned int d;
		   if(nb == -2147483648)
			      {
				      	   
				      	   ft_putnbr(nb /10);
					   	   d=nb % 10;
						   	   d *=-1;
							          put(d+ '0');
								     }
		      else if(nb < 0)
			         {
					 	   put('-');
						   	   nb *=-1;
							   	   ft_putnbr(nb);
								      }
		         else
				    {
					    	   if (nb > 9)
							   	   {
									   			ft_putnbr(nb / 10);
													   }
						   	   put(nb % 10 + '0');
							      }
			    
}
int main()
{

	    ft_putnbr(-4488448);


}
