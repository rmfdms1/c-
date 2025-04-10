#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int i,j,q,cn;
	cn=0;
	int z[6];
	for (i=0;i<6;i++){
		z[i]=(rand()%45)+1;
		for (j=0;j<i;j++){
			if(z[i]==z[j]){
				z[i]=(rand()%45)+1;
				j=0;
				
			}
			cn=cn+1;
		}
	}
	for (q=0;q<6;q++){
		printf("%d \n",z[q]);
	}
	printf("cn:%d",cn);
}