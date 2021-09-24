#include<unistd.h>
#include <stdio.h>
void    ft_ft(int   *nbr){
	    *nbr=42;
}
void    ft_ultime_ft(int *********nbr){
	    *********nbr=42;
}
void    ft_swap(int *a,int *b){
	int te=0;
	te=*a;
	*a=*b;
	*b=te;
}

void    ft_div_mod(int a,int b,int *div,int *mod){
	    if(b==0){

		        }else{
				    *div=a/b;
				        *mod=a%b;
					    }
}
void    ft_ultimate_div_mod(int   *a,int  *b){

	if(*b==0){

	}else{

		    int tp= *a;
		        *a=(*a)/(*b);
			    *b=tp % (*b);
	}

} 
void    ft_putstr(char *str){
	    int i=0;
	        while(str[i]){
			        i++;
				    }
		    write(1,str,i);
}
int    ft_strlen(char  *str){
	    int i=0;
	        while(str[i]){
			        i++;
				    }

		    return i;
}
void    ft_rev_int_tab(int  *tab,int    size){
	    int i=0;
	        int tmp=0;
		    while(i < (size/2)){
			            tmp=tab[i];
				            tab[i]=tab[size -i -1];
					            tab[size -i -1]=tmp;
						            i++;
							        }
}
void ft_sort_int_tab(int    *tab,int    size){
	int i=0;
	int j=0;
	int posmin=0;
	int min=0;
	int x=0;
	while(i <=(size-1)){

		      min=tab[i];
		            posmin=i;
			          j=i+1;
				       while(j<=(size-1)){
					                if(tab[j]< min){
								             min=tab[j];
									                  posmin=j;
											           }
							         j++;
								      }
				            
				           x=tab[i];
					       tab[i]=tab[posmin];
					           tab[posmin]=x;
						       i++;
	}
}
int main(int ac,char **av){
	int i=0;
	int j=0;
	if(ac > 1){
		    i+=1;
		        
		        while(i<ac){
				        
				    while(av[i][j]!='\0'){

					            write(1,&av[i][j],1);

						            j++;
							        }
				       if(i+1!=ac){
					           write(1,"\t",1);
						      }
				           j=0;
					       i++;
					           }
	}
	     
	return 0;
}

