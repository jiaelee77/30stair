#include<iostream>
using namespace std;
int m,n;//natural_num;
int taller_num;

int gcd(int a, int b){
	if (b == 0) return a;
	gcd(b, a%b);
}

int main(){
	cin >> m >> n;
	//returned_gcd = gcd(m, n);
	taller_num = m > n ? m : n;
	cout << gcd(m, n) << " " << taller_num*gcd(m, n) << endl;
	return 0;
}

/*
최대공약수:유클리드 호제법, b==0이될때까지 gcd함수에 (b,a%b) 재귀호출.
최소공배수:최대공약수*taller_num
*/