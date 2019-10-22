#include<iostream>
using namespace std;
int main() {
	     cout << "数字要求:必须有正数和负数同时存在，可以有0" << endl;
	     int len = 0;
	     cout << "输入数组长度:";
	     cin >> len;
	     int*a = new int[len];
	     cout << "输入" << len << "个数字:";
	     for (int i = 0; i < len; ++i)
	         cin >> a[i];
	     int sum = 0;
	     int max = a[0];
	     for (int i = 0; i < len; ++i) {
		         if (sum + a[i] <= 0)sum = 0;
		         else sum += a[i];
		         max = max > sum ? max : sum;
		
	}
	     cout << "最大子数组的和:" << max << endl;
	     return 0;

}