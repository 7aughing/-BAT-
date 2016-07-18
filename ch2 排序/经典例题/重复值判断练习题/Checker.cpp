#include<iostream>
#include<vector>
using namespace std;
class Checker {
public:
    bool checkDuplicate(vector<int> &a, int n) 
	{
        heapSort(a,n);
		int i;
		for(i=0;i<n-1;i++)
			if(a[i]==a[i+1])
				return true;
		return false;
    }
	void heapSort(vector<int> &A, int n)
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
    }
	void HeapAdjust(vector<int> &A,int s,int m)
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
	int b[]={1,2,3,4,5,5,6};
	vector<int> arr(b,b+7);
	Checker a;
	bool c=a.checkDuplicate(arr,7);
	cout<<c;
	return 0;
}