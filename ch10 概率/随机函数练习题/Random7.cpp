#include<iostream>
#include<vector>
using namespace std;
// ���������벻Ҫ�޸�
class Random5 {
public:
	static int randomNumber();
};

class Random7 {
public:
	int rand5() {
		return Random5::randomNumber();
	}
	// ���������벻Ҫ�޸�


	int randomNumber() 
	{
		int a=5*(rand5()-1)+rand5()-1;
		while(a>20)
			a=5*(rand5()-1)+rand5()-1;
		return a%7+1;
	}  
};