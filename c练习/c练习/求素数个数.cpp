#include <stdio.h>
#include <iostream>//与c不同的地方
int a[300],count=0;
double Ave1=0.0,Ave2=0.0;
int isP(int m){
int i;
for( i=2;i<m;i++){
	
	if(m%i==0){
	return 0;}

	return 1;
}
}

void primeCal(){


}

void Rdata(){
	FILE *fp;
	int i;
	fp=fopen(" INT.DAT","r " );
	for (int i=0;i<300;i++)
		fscanf(fp,"%d, ",&a[i]);
	fclose(fp);

}

void Wdata(){
	FILE *fp;
	fp=fopen(" OUT.DAT","w ");
	fprintf(fp,"%d\n%7.2f\n",count,Ave1,Ave2);
	fclose(fp);

}




int main(){//与c不同的地方
 //Rdata();
 //primeCal();
 //Wdata();
 printf("hello world");

 system("pause");//与c不同的地方
 return 0;//与c不同的地方
}






