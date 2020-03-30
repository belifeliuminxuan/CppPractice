# C++ 

## 基础

1.数组指针和指针数组

![](https://markdownimages.oss-cn-beijing.aliyuncs.com/img/20200330201046.png)

![](https://markdownimages.oss-cn-beijing.aliyuncs.com/img/20200330201111.png)

![](https://markdownimages.oss-cn-beijing.aliyuncs.com/img/20200330201147.png)

2.const 限定符

解决魔数、神秘数字问题

```c++

	const int bufSzie = 512;
	// 定义bufsize取代512
	for (int i=0;i!=512;i++)  // 512 称之为魔数
	{
		
	}

```

变量有可能被修改，定义为const修饰，则不能被修改了

const修饰必须初始化

3.extern：extern关键字声明一个变量或函数，并指定它具有外部链接

```c++
/* test.c */
#include <stdio.h>
 
int etn = 100;
 
void layout()
{
    printf("test.c: The etn is %d\n", etn);
}
/* main.c */
#include <stdio.h>
 
extern int etn;
 
int main()
{
    layout();
    printf("main.c: The etn is %d\n", etn);
    return 0;
}
```

## 引用

1.使用 & 符号

2.引用就是别名

定义时进行初始化

```c++
int var=100;
int &b=var;
```

变量的别名

3非const 引用

只能指向同类型的

4.const 引用

```c++
const int iVar = 100;
const int &iVar1 = iVar;
```

可以指向不同类型，可以指向右值（字面量）

传递函数的参数

## 枚举

1.定义枚举--enum

枚举都是常量

```c++
enum
{
	A = 1,
	B,
	C,
	D
};
```

2.