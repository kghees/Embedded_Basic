#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
char command[100][100];
int cnt = 1;

int main(){
	while(1){
		char input[100];
		printf("SSAFY > ");
		scanf("%s",input);
		
	
		if(strcmp("exit",input) == 0) break;
	
		else if(strcmp("date",input) == 0){
			system("date");
			strcpy(command[cnt],input);
			cnt++;
		}
		else if(strcmp("uptime",input) == 0){
			system("uptime");
			strcpy(command[cnt],input);
			cnt++;
		}
		else if(strcmp("ls",input) == 0){
			system("ls -al");
			strcpy(command[cnt],input);
			cnt++;
		}
		else if(strcmp("log",input) == 0){
			system("dmesg");
			strcpy(command[cnt],input);
			cnt++;
		}
		else if(strcmp("history",input) == 0){
			strcpy(command[cnt],input);
			cnt++;
			for(int i = 1; i < cnt; i++){
				printf("%d %s\n",i, command[i]);
			}
			
			printf("SSAFY > ");
			char temp[100];
			scanf("%s",temp);
			
			if(strcmp("!",temp) == 0){
				int a;
				scanf("%d",&a);
				if(a < cnt){
					system(command[a]);
				}
			}
			else if(strcmp("hclear",temp) == 0){
				memset(command, '\n',sizeof(command));
			}
			else{
				printf("ERROR\n");
			}
		}
		else{
			printf("ERROR\n");
		}
	}
	return 0;
}
