#include <iostream>
#include <algorithm>
using namespace std;

int dg(int a,int b,int c,int m){
	int n = 0;
	if(m==0) n++;
	else if(m>0){
		n+=dg(a,b,c,m-a);
		n+=dg(a,b,c,m-b);
		n+=dg(a,b,c,m-c);
	}
	
	return n;
}

int main(int argc, char *argv[]) {
	int a,b,c;
	cin>>a>>b>>c;
	int m;
	cin >> m;
	cout << dg(a,b,c,m);

	return 0;
}