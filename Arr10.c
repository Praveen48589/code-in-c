// find the total number of pairs in the array whose sum is equal to the given value x :

#include<stdio.h>
int main(){
	int n,x;
	printf("enter the total elements : ");
	scanf("%d",&n);
	printf("enter the number X : ");
	scanf("%d",&x);
	int Arr[n];
	for(int i =0;i<n;i++){
		printf("enter the elements value %d : ",i);
		scanf("%d",&Arr[i]);
	}
	for(int i = 0;i<n;i++){
		for(int j =i+1;j<n;j++){
			if(Arr[i]+Arr[j]==x){
				printf("pair is : %d,%d\n",Arr[i],Arr[j]);
			}
		}
	}
	return 0;
}
