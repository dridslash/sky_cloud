#include <unistd.h>
#include <stdio.h>
void f_putchar(char c)
{
	    write(1,&c)
}
int main(int agc,char **agv)
{
	    int i=1;
	        int j=0;
		    if( agc > 1)
			        {
					        
					        while(i < agc)
							        {
									            j = 0;
										                while(agv[i][j]!= '\0')
													            {
															                    write(1,&agv[i][j],1);
																	                    j++;
																			                }
												            write(1,"\n",1);
													                i++;
															        }
						      
						    }
}
