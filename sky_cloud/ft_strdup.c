#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int f_strlen(char * str)
{
	    int i;
	        i = 0;
		    while(str[i] != '\0')
			        {
					        i++;
						    }
		        return (i);
}
char    *ft_strdup(char *src)
{
	    int i;
	        i = 0;
		       int len=f_strlen(src);
		              char *t=(char*)malloc(sizeof(char)*(len+1));
			             if ( t == NULL)
					            {
							               return (0);
								              }
				            while(src[i] != '\0')
						           {
								              t[i]=src[i];
									                 i++;
											        }
					           t[i]='\0';
						          return (t);
}
int main()
{
	    char *a="he*qsllo";
	        printf("%s \n",ft_strdup(a));
}
