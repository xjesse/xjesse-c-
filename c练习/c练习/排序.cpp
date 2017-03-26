#include <stdio.h>
#include <iostream>//与c不同的地方
#include <string.h>
#define LINE 50
#define COL 80

char inBuf(LINE)[COL];
void ReadData();
void WriteData();
void arrangeChar(){
	int i,jflag,col[LINE];
	char temp;
	for(int i=0;i<LINE;i++){
	for(int j=0;i<COL;i++){
	col[i]==j;
	break;
	}
	}


	for(int i=0;i<LINE;i++){
		while(1){
		flag=0;
		for(j=0,j<col[i]/2-1;i++){
		if (inBuf[i][j]<inBuf[i][j+1])
			temp=inBuf[i][j];
		
			inBuf[i][j]=inBuf[i][j+1];
			inBuf[i][j]=temp;
		    flag=1;
		
		}
		if(flag==0)
			break;
	}

	for (int j=0;j<col[i]/2;j++){
	temp=inBuf[i][j];
	inBuf[i][j]=inBuf[i][j+col[i]/2+col[i]%2];
	inBuf[i][j+col[i]/2+col[i]%2]=temp;

	}
	
	
	
	}


}

void main(){

ReadData();
arrangeChar();
WriteData();

}

void ReadData(){
FILE *in;
int i=0;
char *p;
in =fopen("IN.DAT","r");
while(i<20&&fgets(inBuf[i],80,in)!=NULL){
	p=strchr(inBuf[i],'\n');
	if(p)*p=0;
	i++;

}
fclose(in);

}

void WriteData(){
FILE *out;
int i;
out =fopen("OUT.DAT","w");
system("CLS");
for(i=0;i<20;i++){
printf("%s\n",inBuf[i]);
fprintf(out,"s\n",inBuf[i]);
}
fclose(out);
}