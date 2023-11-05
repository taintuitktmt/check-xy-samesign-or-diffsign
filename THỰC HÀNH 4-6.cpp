//Viết chương trình nhập 2 số thực x, y từ bàn phìm.x, y.
//1 - Kiểm tra chúng có khác 0 hay ko và in kết quả ra màn hình.
//2 - Nếu x, y khác 0. Kiểm tra tiếp xem chúng có cùng dấu hay khác dấu và in kết quả ra màn hình

#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "Nhap so thuc x: "; cin >> x;
	cout << "Nhap so thuc y: "; cin >> y;

	if (x == 0 || y == 0)
	{
		if (x == 0 && y == 0)
		{
			cout << "x bang 0 " << "\ny bang 0";
		}
		else if (x == 0 && y != 0)
		{
			cout << "x bang 0 " << "\ny khac 0";
		}
		else if (x != 0 && y == 0)
		{
			cout << "x khac 0 " << "\ny bang 0";
		}
	}
	else
	{
		cout << "x khac 0" << "\ny khac 0";
		float z = x * y;
		if (z > 0)
		{
			cout << "\nx, y cung dau";
		}
		else
		{
			cout << "\nx, y trai dau";
		}
	}
}

