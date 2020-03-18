//copyright @panda
//二维数组中的指针移动

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a[2][3]={
		{1,2,3},
		{4,5,6}
	};
	
		//按个移动指针
		int *q; //一个q的长度为4（一个int）
		q = a[0];
		cout << q << " " << *q << endl;
		cout << q[0] << " " << q[1] << " " << q[2] <<endl;
		
		q++;
		cout << q << " " << *q << endl;
		cout << q[0] << " " << q[1] << " " << q[2] <<endl;
	
	//按行移动指针	
	int (*p)[3];  //一个p长度为12（3*4）
	p = a;
	cout << p[0] << " " << *p[0] <<endl;
	cout << p[1] << " " << *p[1] <<endl;
	cout << p[0][0] << " "  << p[0][1] << " " << p[0][2] <<endl;
	
	p++;
	cout << p[0] << " " << *p[0] <<endl;
	//cout << p[1] << " " << *p[1] <<endl;
	cout << p[0][0] << " " << p[0][1] << " " << p[0][2] <<endl;
	
	//note：指针移动的距离由指针类型字长决定
	
}
