#include <unistd.h>
#include <stdio.h>

int f_strlen(char *str)
{
	   int i=0; 
	      while(str[i])
		         {
				        i++;
					   }
	         return i;
}
int main(int ac , char **av)
{
	    int i=0;
	        int j=0;
		    int c=0;
		        c=f_strlen(av[1]);

			   if( ac == 2)
				      {
					             while(av[1][i] != '\0')
							            {
									               if(av[1][i] == ' ' && av[1][i+1] != '\0' && av[1][i+1] != ' ')
											                  {
														                 j=i+1;
																            }
										                  i++;
												         }
						            while(av[1][j] != '\0' && av[1][j] != ' ')
								           {
										              write(1,&av[1][j],1);
											                 j++;
													        }


							       }
			      else
				         {
						        write(1,"\n",1);
							   }
			       



}
