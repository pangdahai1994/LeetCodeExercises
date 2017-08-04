#include "029_DivideTwoIntegers.cpp"
#include <iostream>
using namespace std;

class test
{
	public:
		int b;
		int go() { return 1;}
		test(int b) { this->b = b; return; };
		test() { this->b = 5; return; };
};

test go(test& s3) {
	return s3;
}

void gg() {
	cout << 777;
}

void PrintValues(int ia[])
{
	for (int i = 0; i <10; i++)
	{
		cout << ia[i] << endl;
	}
}

int main() {
	Solution solution;
	int beichushu = 0;
	int chushu=-1;
	cin >> beichushu >> chushu;
	cout<< solution.divide(beichushu, chushu);
	system("pause");
	/*
	test (*get)(int a) = [](int a) {test s; return s; };
	void(*man)();
	man = gg;
	man();
	test s1 = get(5);
	test* s2= & s1;
	test s3 = s1;
	s2->go();
	s3.go();
	cout << s2<<endl;
	cout << &s3 << endl;
	cout << &s1 << endl;
	s3.b = 8;
	cout << s2->b;
	system("pause")
	
	int number=10;
	bool b[111];
	memset(b, 0, sizeof(b));
	//cout << b[4];
	int a[10];
	memset(a,1,1);
	char string[50]="";
	//cout << a[1];
	_itoa_s(a[1], string,50,2);
	cout << string;
	//cout << a[1];
	system("pause");

	int a = 1;
	if (a = 1) {
		int b = 2;
	
	test a(50);
	test b = a;
	cout << b.b;
	b.b = 100;
	cout << b.b;
	cout << a.b;
	system("pause");
	return 0;	*/
	/*
		int j[2] = {0, 1};

		PrintValues(j);
		system("pause");
		return 0;
		*/
}