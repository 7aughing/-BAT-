#include<iostream>
using namespace std;
class RandomSeg {
public:
	// �ȸ��ʷ���[0,1)
	double f() {
		return rand() * 1.0 / RAND_MAX;
	}
	// ͨ������f()��ʵ��
	double random(int k, double x) 
	{
		double res=-1;
		for(int i=0;i<k;i++)
		{
			double b=f();
			res=(res>b)?res:b;
		}
		return res;
	}
};