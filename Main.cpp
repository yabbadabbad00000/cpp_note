#include <iostream>

#define LOG(x) std::cout<<x<<std::endl

/*
void increment(int* value)
{
	(*value)++;
}

int main()
{
	int a = 5;
	increment(&a);
	LOG(a);
	std::cin.get();
}
*/

//&a 指向a的内存地址 设指针：int* ptr=&a;
//*ptr 逆向引用指针  引用：int& ref = a;

void increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	increment(a);
	LOG(a);
	std::cin.get();
}

