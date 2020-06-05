#include<stdio.h>
int search(int A[],int n,int key)
{
 	int low=0,high=n-1,mid;
 	int count=0;
 	if(A[low]==key){
        count++;
  		return count;
    }
 	else if(A[high]==key){
        count++;
  		return count;
 	}
 	else{
  		while(low<=high){
   			mid=(low+high)/2;
   			if(A[mid]==key){
                count++;
                return count;
   			}
   			if(key>A[mid]){
                count++;
                low=mid+1;
   			}
   			else{
                count++;
                high=mid+1;
   			}
  		}
 	}
 	return count;	//查找失败，返回-1
}
main()
{
 	int A[60];
 	for(int i=0;i<60;i++)
        A[i]=i+11;
 	int i,n,addr;
 	printf("A[60]:");
 	for(i=0;i<60;i++)
  		printf("%d ",A[i]);	//显示数组A的内容
 	printf("\n输入要查找元素：");
 	scanf("%d",&n);		//输入待查找元素
 	addr=search(A,60,n);		//折半查找返回该元素在数组中的下标
 	if(addr!=-1)	{	//查找成功
  		printf("%d是数组中的第%d个元素",n,addr+1);
        printf("查找次数：%d",addr);
 	}
 	else		//查找失败
  		printf("A数组中无%d",n);
 	return 0;
}
