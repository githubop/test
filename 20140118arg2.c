#include <stdio.h>


#define NUM 10000

char *my_fgets(char *s, int n, FILE *fp)
{
    char *const head = s;
    for (; n > 1; n--){
        int c = fgetc(fp);
        if (c == EOF)
            break;
        *s = c;
        s++;
        if (c == '\n')
            break;
    }
    if (s == head || ferror(fp))
        return NULL;
    *s = '\0';
    return head;
}


int main(){	
	char str[NUM];	
	while(my_fgets(str, 4,stdin)!=NULL){		
		printf("%s",str);
		fputs(str,stdout);
	}
	return 0;
}

//=========出力結果=========//
//char str 0 , fgets 0  強制終了
//char str 0 , fgets 1　強制終了
//char str 0 , fgets 2　強制終了
//char str 0 , fgets 3　強制終了
//char str 0 , fgets 4　強制終了
//char str 1 , fgets 0  強制終了
//char str 1 , fgets 1  強制終了
//char str 1 , fgets 2	aassddff
//char str 1 , fgets 3	asasdfdf
//char str 1 , fgets 4	asdasdf\nf
//char str 2 , fgets 0  強制終了
//char str 2 , fgets 1  強制終了
//char str 2 , fgets 2	aassddff
//char str 2 , fgets 3	asasdfdf
//char str 2 , fgets 4	asdasdf\nf
//char str 3 , fgets 0  強制終了
//char str 3 , fgets 1  強制終了
//char str 3 , fgets 2	aassddff
//char str 3 , fgets 3	asasdfdf
//char str 3 , fgets 4	asdasdf\nf
//char str 4 , fgets 0  強制終了
//char str 4 , fgets 1  強制終了
//char str 4 , fgets 2	aassddff
//char str 4 , fgets 3	asasdfdf
//char str 4 , fgets 4	asdasdf\nf

