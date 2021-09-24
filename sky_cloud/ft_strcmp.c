#include <unistd.h>
#include <stdio.h>
#include <string.h>
int     ft_strcmp(char  *s1,char    *s2)
{
	   unsigned int i=0;

	   while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	   {
		      s1++;
		         s2++;
	   }
	   return *s1 - *s2;
}
int main()
{

	char a []="abcdefgh";
	char b []="abcd";
	int d=ft_strcmp(a,b);

	printf("%d",d);

}
