#include <unistd.h>
#include <stdio.h>
int main(int agc,char **agv)
{
	    int i=0;
	        if( agc == 1)
			    {
				            while(agv[0][i] != '\0')
						            {
								                write(1,&agv[0][i],1);
										            i++;
											            }
					            write(1,"\n",1);
						        }
}
