#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i,j;
	int matrizA [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrizB [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrizC [3][3] = {{0,0,0},{0,0,0},{0,0,0}};	
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			matrizC[i][j]=(matrizA[i][j] * matrizB[j][i])+(matrizA[i+1][j] * matrizB[j][i+1])+(matrizA[i+2][j] * matrizB[j][i+2]);
			printf("%d ",matrizC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
