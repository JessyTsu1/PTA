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
 	return count;	//����ʧ�ܣ�����-1
}
main()
{
 	int A[60];
 	for(int i=0;i<60;i++)
        A[i]=i+11;
 	int i,n,addr;
 	printf("A[60]:");
 	for(i=0;i<60;i++)
  		printf("%d ",A[i]);	//��ʾ����A������
 	printf("\n����Ҫ����Ԫ�أ�");
 	scanf("%d",&n);		//���������Ԫ��
 	addr=search(A,60,n);		//�۰���ҷ��ظ�Ԫ���������е��±�
 	if(addr!=-1)	{	//���ҳɹ�
  		printf("%d�������еĵ�%d��Ԫ��",n,addr+1);
        printf("���Ҵ�����%d",addr);
 	}
 	else		//����ʧ��
  		printf("A��������%d",n);
 	return 0;
}
