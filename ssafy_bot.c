#include <stdio.h>
#include <string.h>

int main(){
	char input[100];
	while(1){
		printf("SSAFY_ECHOBOT >> ");
		scanf("%s",input);
		if(strcmp(input,"exit") == 0 || strcmp(input,"bye") == 0)break;
		else if(strcmp(input,"EXIT") == 0 || strcmp(input,"BYE") == 0)break;
		printf("%s\n",input);
	}
}
