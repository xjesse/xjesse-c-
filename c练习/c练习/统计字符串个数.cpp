#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int findStr(char * str ,char * substr)
{
	int n;
	char *p, *r;
	n=0;
	while(*str){
	p=str;
	r=substr;
	while(*r){
		if(*p==*r){
		r++;
		p++;
		}
		else
		{break;}
		if(*r=='\0'){
			n++;
			str++;}
	}
	
	}
	return n;

}


void ReadWrite(){
char str [80],substr[10],ch;
int n,len,i=0;
FILE * rf,* wf;
rf=fopen(" IN.DAT","r");
wf=fopen(" OUT.DAT","r");
while(i<25){
	fgets(str,80,rf);
	fgets(substr,10,rf);
	len=strlen(substr)-1;
	ch=substr[len];
	if(ch=='\n'||ch==0x1a)
		substr[len]=0;
	n=findStr(str ,substr);
	fprintf(wf,"%d/n",n);
	i++;
}
fclose(rf);
fclose(wf);

}




int main(){

char str [80],substr[10];
int n;
printf("输入字符串：");
gets(str);
printf("输入字符串：");
gets(substr);
puts(substr);
n=findStr(str,substr);
printf("n=%d/n",n);
ReadWrite();
system("pause");//与c不同的地方
return 0;//与c不同的地方

}