#include <unistd.h>
#include <stdio.h>

int f_strlen(char   *s)
{
	  int i;
	    i = 0;
	       while(s[i] != '\0')
		          {
				         i++;
					    }
	          return i;

}
char    *ft_strcat(char *dest,char  *src)
{

	int i=0;
	int j=0;
	i=f_strlen(dest);
	while(src[j] != '\0')
	{
		    dest[i]=src[j];
		        j++;
			    i++;
	}
	dest[i]='\0';
	return dest;
}
char *ft_strjoin(int size,char **strs,char  *sep)
{
	    char *p;
	        if (size == 0)
			    {
				            *p=(char*)malloc(sizeof(char));
					            *p='\0';
						            return p;
							        }

}
int main(int ac,char **av)
{




}
