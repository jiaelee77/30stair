#include<iostream>
using namespace std;
int m,n;//natural_num;
int returned_gcd;

int gcd(int a, int b){
	if (b == 0) return a;
	gcd(b, a%b);
}

int main(){
	cin >> m >> n;
	//returned_gcd = gcd(m, n);
	returned_gcd = gcd(m, n);
	cout << returned_gcd << " " << (m*n)/returned_gcd << endl;
	return 0;
}

/*
최대공약수:유클리드 호제법, b==0이될때까지 gcd함수에 (b,a%b) 재귀호출.
최소공배수:gcd*(m/gcd)*(n/gcd)=(m*n)/gcd
*/