#include<iostream>
using namespace std;
int main() {
	     cout << "����Ҫ��:�����������͸���ͬʱ���ڣ�������0" << endl;
	     int len = 0;
	     cout << "�������鳤��:";
	     cin >> len;
	     int*a = new int[len];
	     cout << "����" << len << "������:";
	     for (int i = 0; i < len; ++i)
	         cin >> a[i];
	     int sum = 0;
	     int max = a[0];
	     for (int i = 0; i < len; ++i) {
		         if (sum + a[i] <= 0)sum = 0;
		         else sum += a[i];
		         max = max > sum ? max : sum;
		
	}
	     cout << "���������ĺ�:" << max << endl;
	     return 0;

}