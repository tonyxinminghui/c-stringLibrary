/*************************************************************************
	> File Name: myMemMovev01.cpp
	> Author: Tony
	> Mail: 445241843@qq.com 
	> Created Time: Thu 23 Jun 2016 07:51:47 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
void myMemMove(char *des, char *src, int count)
{
	while(count--)
		*des++ = *src++;
}
int main(void)
{
	const int size = 1024;
	char p1[size] = "HELLO, WORLD!";
	char p2[size];
	myMemMove(p2, p1, strlen(p1));
//	p2[15] = 'd';
	cout << p2 << endl;
	return 0;
}
