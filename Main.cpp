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

//&a ָ��a���ڴ��ַ ��ָ�룺int* ptr=&a;
//*ptr ��������ָ��  ���ã�int& ref = a;

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

