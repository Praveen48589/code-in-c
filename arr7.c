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
	
	int max_one = 0;
	int idx = -1;
	
	for(int i =0;i<row;i++){
		int max_one2 = 0;
		for(int j =0;j<col;j++){
			if(arr[i][j]==1){
				max_one2 += 1;
			}
			if(max_one2>max_one){
				max_one = max_one2;
				idx = i;
			}
		}
	}
	printf("maximum one is : %d\nat index : %d",max_one,idx);
}