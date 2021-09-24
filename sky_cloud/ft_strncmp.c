#include <unistd.h>
#include <stdio.h>
#include <string.h>
int     ft_strncmp(char  *s1,char    *s2,unsigned int   n)
{
	unsigned int i=0;
	if( n ==0)
	{
		   return 0;
	}
	while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n  )
	{
		   s1++;
		      s2++;
		         n--;
	}
	return *s1 - *s2;

}
int main()
{
	char a [10]="aaaaa\0";
	char b [10]="aaaaa";

	int d =ft_strncmp(a,b,7);
	int f= strncmp(a,b,7);
	printf("%d \n",d);
	printf("%d",f);
}
