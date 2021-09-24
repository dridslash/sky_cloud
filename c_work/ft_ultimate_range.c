#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	ft_ultimate_range(int	**range,int min,int max)
{
	int i=0;
	int def=max-min;
	int *r;
	if (min > max)
	{
		*range=NULL;
		return 0;
	}else
	{
	  r=(int*)malloc(sizeof(int)*(def));	
	  while(min < max)
	  {
		  r[i]=min;
		  i++;
		  min++;
	  }
	  *range=r;
	  return i;
	}
}
int main()
{
	int *range;
	int min=20;
	int max=10;
	int k=ft_ultimate_range(&range,min,max);
	int i=0;
	printf("%d \n",k);
}
