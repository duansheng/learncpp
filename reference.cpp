#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int x = 3;
	int &r = x;
	cout << r << endl;

	// 引用不能为空
	// int &r2;
	
	int y = 4;
	int &r3 = y;
	r = r3; // r指向x，x的值被改为y指向的值
	cout << "r = " << r << endl;
	cout << "x = " << x << endl;
	return 0;
}
