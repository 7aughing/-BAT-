#include<iostream>
using namespace std;
class HeapSort {
public:
    int* heapSort(int* A, int n)
	//������
    {
		int i,temp;
		for(i=n/2-1;i>=0;--i)
			HeapAdjust(A,i,n-1);
		for(i=n-1;i>0;i--)
		{
			temp=A[0];
			A[0]=A[i];
			A[i]=temp;
			HeapAdjust(A,0,i-1);
		}
		return A;

    }
	void HeapAdjust(int *A,int s,int m)
	//��֪A[s,...,m]�м�¼�Ĺؼ��ֳ�A[s]֮�������ѵĶ��壬����������A[s]
    //�Ĺؼ��֣�ʹA[s,...,m]��Ϊһ���󶥶�(�����м�¼�Ĺؼ��ֶ���)
	{
		int j,rc=A[s];
		for(j=2*s+1;j<=m;j=2*j+1)
		{
			if(j<m&&A[j]<A[j+1])
				j++;
			if(rc>A[j])
				break;
			A[s]=A[j];
			s=j;
		}
		A[s]=rc;
	}
};
int main()
{
	int arr[]={54,35,48,36,27,12,44,44,8,14,26,17,28};
	HeapSort a;
	a.heapSort(arr,13);
	for(int i=0;i<13;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}