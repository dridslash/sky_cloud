nclude <stdio.h>
#include <string.h>
#include <stdlib.h>
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

unsigned int    ft_strlcat(char    *dest,char  *src,unsigned int size)
{

	unsigned int i=0;
	unsigned int j=0;
	unsigned int b=0;
	unsigned int p=0;
	i=f_strlen(dest);
	b=i;
	p=f_strlen(src);
	while(src[j] != '\0' && j < size-b-1)
	{
		    dest[i]=src[j];
		        j++;
			    i++;
	}
	dest[i]='\0';

	if(size > b)
	{
		    return b+p;
	}

	return (p+size);
}


int main()
{


	char dest[20]="hello ";
	char src[50]="world";
	unsigned int d= strlcat(dest,src,15);
	unsigned int d2= ft_strlcat(dest,src,15);
	printf(" strlcat :%d \n",d);
	printf(" my strlcat :%d",d2);
}
