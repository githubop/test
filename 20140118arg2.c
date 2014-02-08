#include <stdio.h>

int main(){
	int c;
/*	while((c=fgetc(stdin))!=EOF){
		putchar(c);
		printf("%d\n",c);
	}
	while(c=fgetc(stdin)!=EOF){
		putchar(c);
		printf("%d\n",c);
	}*/
	while((c=fgetc(stdin))!=EOF){
		if (c=='\n'){
			printf("[LF]");
		}
		putchar(c);
	}
	return 0;
}
