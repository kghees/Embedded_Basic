#include <stdio.h>
#include <string.h>

int main(){
	//input받을 배열
	char input[100];
	while(1){
		printf("SSAFY_ECHOBOT >> ");
		//입력받고
		scanf("%s",input);
		//exit나 bye가 들어오면 종료
		if(strcmp(input,"exit") == 0 || strcmp(input,"bye") == 0)break;
		else if(strcmp(input,"EXIT") == 0 || strcmp(input,"BYE") == 0)break;
		// 그 외에는 출력
		printf("%s\n",input);
	}
}
