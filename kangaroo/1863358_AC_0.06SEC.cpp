#include<iostream>
using namespace std;

int n;
int a_kangaroo, b_kangaroo, c_kangaroo;
int num_of_jumps=0;

int main(){
	cin >> a_kangaroo>> b_kangaroo >> c_kangaroo;
	num_of_jumps =( (b_kangaroo - a_kangaroo) >= (c_kangaroo - b_kangaroo) )? (b_kangaroo - a_kangaroo) : (c_kangaroo - b_kangaroo);
	cout << num_of_jumps - 1 << endl;
	return 0;
}