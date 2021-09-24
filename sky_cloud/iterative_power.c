#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int  nb,int  power)
{

	int s=1;
	int i=1;
	if(power == 0)
		return 1;
	while ( i <= power)
	{
		    s= nb * s;
		        i++;
	}
	return s;
}
int main()
{

	printf("%d",ft_iterative_power(-8,8));

}
