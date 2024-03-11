#include <iostream>
using namespace std;
int main() {
	int so1, so2, so3, lonnhat, nhonhat;
	cout << "nhap so1:";
	cin >> so1;

	cout << "nhap so2:";
	cin >> so2;

	cout << "nhap so3:";
	cin >> so3;
	lonnhat = nhonhat = so1;
	if (nhonhat > so2) {
		nhonhat = so2;
	}
	if (lonnhat < so2) {
		lonnhat = so2;
	}
	if (nhonhat > so3) {
		nhonhat = so3;
	}
	if (lonnhat < so3) {
		lonnhat = so3;
	}
	cout << " so nhonhat la:" << nhonhat << endl;
cout << " so lonnhat la:" << lonnhat << endl;
return 0;

	
	
	
}
