#include <unistd.h>
#include <stdio.h>

int  ft_str_is_numeric(char  *str)
{
	   int i=0;
	      int ck=1;
	         while(str[i] != '\0')
			    {
				           if(str[i] >='0' && str[i]<='9')
						          {
								            ck=1;
									           }
					          else
							         {
									           return 0;
										          }
						     
						        i++;
							   }
		    
		    return ck;
}
int main(){
	   /* int i=458;
	    *     char *src="sdw";
	    *         char dest[22]="hello";
	    *             char *t=ft_strcpy(dest,src);
	    *                 printf("%s",t);
	    *                      char a[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	    *                           char t[5]="hello world";*/



	     char a[11]="hello world";
	          char t[11];
		       char *pl;
		          int d=ft_str_is_numeric(pl);
			       printf("%d",d);
			           return 0;
}
