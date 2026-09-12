#include <stdio.h>
#include <string.h>
void main(){
	char str[] = "kevin";
	/*Predefined function*/
	printf("%d",strlen(str));

	/*Fundamendal logic*/
	int i=0,c=0;
	while (str[i] != '\0'){
		c+=1;
		i++;
	}
	printf("%d",c);


}