#include <unistd.h>
#include <stdio.h>
int m_atoi(char *str){

	int i=0;
	int result=0;
	while(str[i]!='\0'){
		    
		    
		    result=result * 10 + str[i]-'0';
		        i++;
	}

	return result;
}
int main(){

	char str[]="12345";
	int d=m_atoi(str);
	printf("%d",d);

}
