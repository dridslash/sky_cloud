#include <unistd.h>
#include <stdio.h>
unsigned int f_strlen(char   *s)
{
	  int i;
	    i = 0;
	       while(s[i] != '\0')
		          {
				         i++;
					    }
	          return i;

}

char    *ft_strncat(char    *dest,char  *src,unsigned int nb)
{

	unsigned int i=0;
	unsigned int j=0;
	i=f_strlen(dest);
	while(src[j] != '\0' && j < nb)
	{
		    dest[i]=src[j];
		        j++;
			    i++;
	}
	dest[i]='\0';

	return dest;
}

int main()
{

	char a[]="world";
	char b[]="hello ";

	ft_strncat(b,a,1);
	printf("%s",b);

	return 0;

}
