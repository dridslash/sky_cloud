#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	*ft_range(int min,int max)
{
	int i;
	i=0;
	int *range;
	int def=max-min;
	if(min > max)
	{
		return NULL;
	}
	else
	{
	range=(int*)malloc(sizeof(int)*(def));
        while(min < max)
	{
	range[i]=min;
	i++;
	min++;
	}
	}
	return range;
}
int main()
{
int min=0;
int max=10;
int i=0;
int *range;
range =ft_range(min,max);
while(min < max)
{
printf("%d \n",range[i]);
i++;
min++;
}
free(ft_range(min,max));
}
