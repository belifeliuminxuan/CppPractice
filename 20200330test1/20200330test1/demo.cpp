#include <iostream>
using namespace std;

const int var = 10; // 变量
enum 
{
	A = 1,
	B,
	C,
	D
};

int main()
{
	//int var=100;
	//int &b=var;
	//// b就是a的别名
	//cout<<++b<<endl;
	/*const int iVar = 100;
	const int &iVar1 = iVar;*/
	cout<<A<<endl;
	cout<<B<<endl;
	cout<<C<<endl;
	cout<<D<<endl;

	return 0;
}