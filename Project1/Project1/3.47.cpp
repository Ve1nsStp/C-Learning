#include<iostream>

int main() {
	using namespace std;

	cout << "\aOperation \"Hyperhype \" is now actived :\n ";
	cout << "Enter your agent code:______\b\b\b\b\b\b";
	// \b �˸�� ��������
	long code;
	cin >> code;
	cout << "\aYou entered" << code << "...\n";
	cout << "\aCode verified! Proceed with plan Z3!\n";
	return 0;
}