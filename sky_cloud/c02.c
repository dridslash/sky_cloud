#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src){
	int i=0;
	while(src[i]){
		    dest[i]=src[i];
		       i++;
	}
	dest[i]='\0';
	return dest;

}
unsigned int    ft_strlen(char  *str){
	    unsigned int i=0;
	        while(str[i]!='\0'){
			        i++;
				    }

		    return i;
}
char    *ft_strncpy(char    *dest,char*src,unsigned int n){

	unsigned int i=0;
	while(src[i]!='\0'){
		   if(i < n ){
			      dest[i]=src[i];
			         }
		      i++;
	}

	while(n<i){
		dest[n]='\0';
		 n++;
	}
	return dest;
}
int    ft_str_is_alpha(char   *str){

	int i=0;
	int asc=0;
	char a;
	int ck=1;
	while(str[i]){
		    asc=a;
		       if((asc >=97 && asc <=122) || (asc >=65 && asc <=90)){
			               ck=1;
				          }else
						     {
							           return 0;
								      }
					     i++;
	}
	return ck;
}
int  ft_str_is_numeric(char  *str)
{
	   int i=0;
	      int ck=1;
	         while(str[i] != '\0'){
			        if(str[i] >='0' && str[i]<='9')
					       {
						                 ck=1;
								        }else
										       {
											                 return 0;
													        }
									   i++;
									      }
		    return ck;
}
int   ft_str_is_lowercase(char  *str){
	   int i=0;
	      int ck=1;
	         while(str[i]){
			       if(str[i]>='a' && str[i]<='z'){
				                 ck=1;
						       }else{
							                return 0;
									      }
			             i++;
				        }
		    return ck;
}
int   ft_str_is_uppercase(char   *str){
	   int i=0;
	      int ck=1;
	         while(str[i]){
			       if(str[i]>='A' && str[i]<='Z'){
				                 ck=1;
						       }else{
							                return 0;
									      }
			             i++;
				        }
		    return ck;
}
int   ft_str_is_printable(char*str){
	   int i=0;
	      int ck=1;
	         int k=0;
		    while(str[i]){
			          k=str[i];
				        if(k>=32 && k<=127){
						          ck=1;
							        }else{
									         return 0;
										       }
					      i++;
					         }
		       return ck;
}
char  *ft_strupcase(char   *str){
	   int i=0;
	      while(str[i]!='\0'){
		            if(str[i]>='a' && str[i]<='z'){
				             str[i]-=32;
					           }
			          i++;
				     }
	         return str;
}
char  *ft_strlowcase(char  *str){
	   int i=0;
	      while(str[i]!='\0'){
		            if(str[i]>='A' && str[i]<='Z'){
				             str[i]+=32;
					           }
			          i++;
				     }
	         return str;
}



int is_printable(int c){
	   if((c >= 48 && c <=57) || (c >= 65 && c<= 90) || (c >= 97 && c <= 122)){
		           return 0;
			      }
	      return 1;
	         
}
char  *ft_strcapitalize(char  *str){
	       int i=0;
	              int asci=0;
		             asci=str[0];
			           
			            if(str[0]!=' ' && (is_printable(asci))){
					              str[0]-=32;
						             }
				           
				           while(str[i] !='\0'){
						             asci=str[i-1];
							               if(str[i] >='a' && str[i] <='z' && (is_printable(asci))){
									                    str[i]-=32;
											              }else if(str[i] >='A' && str[i] <= 'Z' && !(is_printable(asci))){
													                   str[i]+=32;
															             }
								                 i++;
										        }
					          
					          return str;
}
unsigned int ft_strlcpy(char    *dest,char   *src,unsigned int n){

	unsigned int i=0;
	unsigned int j=0;
	while(src[i]!='\0' && i < n-1 ){
		   
		   dest[i]=src[i];
		      
		      
		      i++;
	}
	j=ft_strlen(src);
	while(i< n-1){
		dest[n]='\0';
		n++;
	}
	return j;
}
int main(){
	   /* int i=458;
	    *     char *src="sdw";
	    *         char dest[22]="hello";
	    *             char *t=ft_strcpy(dest,src);
	    *                 printf("%s",t);*/
	     //char a[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	     //     //char t[5]="hello world";
	     //          //ft_strcapitalize(a);
	     //               //char a[11]="WWssW";
	     //                    char t[11]="hello";
	     //                         char pl[11];
	     //                              char a[100]="salut, 4\ncomMe{nt tU vAs ? 42m¥Otßs quarante-deux; cinquante+eT+uN";
	     //                                   
	     //                                      ft_strcapitalize(a);
	     //                                           printf("%s",a);
	     //                                               return 0;
	     //                                               }
