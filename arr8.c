#include<stdio.h>
int main(){
	int row;
	scanf("%d",&row);
	int col;
	scanf("%d",&col);
	int arr[row][col];
	for(int i =0;i<row;i++){
		for(int j =0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<col;i++){
		for(int j =0;j<row;j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}