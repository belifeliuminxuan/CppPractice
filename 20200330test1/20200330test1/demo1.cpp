#include <iostream>
using namespace std;

#include <string>

int main()
{
	string s1;
	string s2("test");
	string s3(s2);
	string s4(10,'1');

	getline(cin,s1);
	cout<<s1;
	//char name[10]; // C���� �ַ�����

	//string name1="123";
	//string name2(name1);// C++  string����				
	return 0;
}