/*	�ǽ� 7 : scanExample.c
	�ۼ��� : 2019. 03. 14
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ڷ����� ���� scanf ���� ������ ���
*/

#define _CRT_SECURE_NO_WARNINGS // scanf �Լ� ��뿡 �־� �߻��ϴ� ��� �������� �ʵ��� �����Ϸ����� �����ϴ� ��ó���� - å���� �����Ͽ���.
#include <stdio.h>		// ��ó���� 

int main(int argc, char* argv[] ) {		// main �Լ�

	short	s = 0;;			// short�� ���� ����
	long	l = 0;			// long�� ���� ����, int���� ũ�Ⱑ ����.
	unsigned 	u = 0;		// unsigned int�� ���� ����, unsigned int�� �����̴�.

	printf("Enter a short number : ");		// short�� ���ڸ� �Է��ش޶�� ���
	scanf("%hd", &s);						// �Է¹��� short�� ���ڸ� ���� s�� ����
	printf("Enter a long number : ");		// long�� ���ڸ� �Է��ش޶�� ���
	scanf("%ld", &l);						// �Է¹��� long�� ���ڸ� ���� l�� ����
	printf("Enter a unsigned number : ");	// unsigned int�� ���ڸ� �Է��ش޶�� ���
	scanf("%u", &u);						// �Է¹��� unsigned int�� ���ڸ� ���� u�� ����

	printf("\n%hd %ld %u \n", s, l, u);		
	/*  �Է¹��� s,l,u ���� ����Ѵ�. �̶� %hd(half d)�� short���� ��Ÿ���� ���
		%ld�� long ���� ��Ÿ���� ���� ���, %u�� ��ȣ���� ����(unsigned)�� ����ϱ� ���� %u�� ��� 
	*/
	
	system("pause");		// ���â Ȯ��
	return 0;				// 0 ��ȯ
}