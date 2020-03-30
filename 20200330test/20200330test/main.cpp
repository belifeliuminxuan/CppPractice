#include <iostream>
using namespace std;

#include <string>

class Person
{
	typedef std::string::size_type index;
public:
	Person()
		:name_("test")
	{

	}
	string getName()
	{
		return name_;
	}
private:
	string name_;
};
class Student:public Person
{
public:
	Student()
	{
		cout<<"Student"<<endl;
	}
};

class Screen
{
public:
	void get() const
	{}
private:
	string contents_;

};
int main()
{
	int* arr[12];// Êý×éÖ¸Õë
	int (*arr)[100];
	//Student stu;
	//cout << stu.getName();
	return 0;
}