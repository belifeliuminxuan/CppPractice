#include <iostream>
using namespace std;

//const int var = 10; // ����
//enum ERRORNUMBER
//{
//	A = 1,
//	B,
//	C,
//	D
//};
#include <string>
class  Dog
{
public:
	Dog()
	{
		cout<<"i am Dog()";
	}
	Dog(const int& heiht,const int& weight)
	{
		cout<<"i am Dog(int,int)";
	}
private:
	int height_;
	int weight_;
};


int main()
{
	Dog d(); // �� 


	//int var=100;
	//int &b=var;
	//// b����a�ı���
	//cout<<++b<<endl;
	/*const int iVar = 100;
	const int &iVar1 = iVar;*/
	//cout<<A<<endl;
	//cout<<B<<endl;
	//cout<<C<<endl;
	//cout<<D<<endl;

	// ERRORNUMBER E= A;

	return 0;
}