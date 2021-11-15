#include <iostream>
using namespace std;

int tong(int a, int b)
{
	return a + b;
}


int hieu(int a, int b)
{
	return a-b;
}

int tich(int a, int b)
{
	return a*b;
}


int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	if(a%2==0)
	{
		cout<<"a chan";
	}
	else
		cout<<"a le";
	cout << "Nhap so nguyen 2: ";
	cin >> b;

	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if (phepToan == "+")
	{
		cout<< tong(a,b);
	}
	if (phepToan == "-")
	{
		cout<< hieu(a,b);
	}
	if (phepToan == "*")
	{
		cout<< tich(a,b);
	}
	system("pause");
	return 0;
}

//Cau 19