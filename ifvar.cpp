#include <iostream>
using std::cout;
using std::endl;

int main()
{
	if (auto x = 2; x < 3)
	{
		cout << x << " < 3\n";
	}
	else
	{
		cout << x << " >= 3\n";
	}
	// 无法编译：x作用域限制在if的两个分支
	// cout << x << endl;
	return 0;
}
