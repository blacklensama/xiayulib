#include "xiayu.h"
using namespace xiayuLib;
void add(int i)
{
	cout << i;
}
int main()
{
	xiayuObject t;
	xiayuString s;
	xiayuFloat f;
	xiayuDouble d;
	xiayuInt i,j;
	xiayuChar c;
	xiayuDouble::Parse("asd");
	j = 3;
	i = 5;
	int a;
	a = i;
	Action1<int> test;
	test.add(add);
	test(1);
	/*cout << i << endl;
	cout << j << endl;
	cout << a << endl;
	cout << xiayuInt::Parse("1") << endl;
	cout << xiayuDouble::Parse("1.24") << endl;*/
}